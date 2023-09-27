// #include<iostream>
// #include<cstring>
// using namespace std;

// void cipher(int i, int c);
// int findMin();
// void makeArray(int col, int row);

// char arr[22][22], darr[22][22], emessage[111], retmessage[111], key[55];
// char temp[55], temp2[55];
// int k = 0;

// int main() {
//     char *message, *dmessage;

//     int i, j, klen, emlen, flag = 0;
//     int r, c, index, min, rows;

//     cout << "Enter the key: ";
//     cin.ignore();
//     cin.getline(key, sizeof(key));

//     cout << "\nEnter message to be ciphered: ";
//     cin.ignore();
//     cin.getline(message, sizeof(message));

//     strcpy(temp, key);
//     klen = strlen(key);

//     k = 0;
//     for (i = 0;; i++) {
//         if (flag == 1)
//             break;

//         for (j = 0; key[j] != '\0'; j++) {
//             if (message[k] == '\0') {
//                 flag = 1;
//                 arr[i][j] = '-';
//             } else {
//                 arr[i][j] = message[k++];
//             }
//         }
//     }
//     r = i;
//     c = j;

//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     k = 0;

//     for (i = 0; i < klen; i++) {
//         index = findMin();
//         cipher(index, r);
//     }

//     emessage[k] = '\0';
//     cout << "\nEncrypted message is: " << emessage << endl;

//     emlen = strlen(emessage);

//     strcpy(temp, key);

//     rows = emlen / klen;
//     j = 0;

//     for (i = 0, k = 1; emessage[i] != '\0'; i++, k++) {
//         temp2[j++] = emessage[i];
//         if ((k % rows) == 0) {
//             temp2[j] = '\0';
//             index = findMin();
//             makeArray(index, rows);
//             j = 0;
//         }
//     }

//     cout << "\nArray Retrieved is\n";

//     k = 0;
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             cout << darr[i][j] << " ";
//             retmessage[k++] = darr[i][j];
//         }
//         cout << endl;
//     }
//     retmessage[k] = '\0';

//     cout << "\nMessage retrieved is: " << retmessage << endl;

//     return 0;
// }

// void cipher(int i, int r) {
//     int j;
//     for (j = 0; j < r; j++) {
//         emessage[k++] = arr[j][i];
//     }
// }

// void makeArray(int col, int row) {
//     int i, j;
//     for (i = 0; i < row; i++) {
//         darr[i][col] = temp2[i];
//     }
// }

// int findMin() {
//     int i, j, min, index;

//     min = temp[0];
//     index = 0;
//     for (j = 0; temp[j] != '\0'; j++) {
//         if (temp[j] < min) {
//             min = temp[j];
//             index = j;
//         }
//     }

//     temp[index] = 123;
//     return index;
// }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform columnar transposition encryption
string encrypt(const string& message, const string& key) {
    int keyLength = key.length();
    int messageLength = message.length();

    // Calculate the number of rows needed in the matrix
    int numRows = (messageLength + keyLength - 1) / keyLength;

    // Initialize the matrix
    vector<vector<char>> matrix(numRows, vector<char>(keyLength));

    // Fill the matrix with the message
    int index = 0;
    for (int col = 0; col < keyLength; col++) {
        for (int row = 0; row < numRows; row++) {
            if (index < messageLength) {
                matrix[row][col] = message[index++];
            } else {
                matrix[row][col] = ' ';
            }
        }
    }

    // Sort the key and rearrange the columns accordingly
    string sortedKey = key;
    sort(sortedKey.begin(), sortedKey.end());

    string ciphertext;
    for (int col = 0; col < keyLength; col++) {
        int colIndex = key.find(sortedKey[col]);
        for (int row = 0; row < numRows; row++) {
            ciphertext += matrix[row][colIndex];
        }
    }

    return ciphertext;
}

// Function to perform columnar transposition decryption
string decrypt(const string& ciphertext, const string& key) {
    int keyLength = key.length();
    int ciphertextLength = ciphertext.length();

    // Calculate the number of rows needed in the matrix
    int numRows = (ciphertextLength + keyLength - 1) / keyLength;

    // Calculate the number of columns in the matrix
    int numCols = keyLength;

    // Initialize the matrix
    vector<vector<char>> matrix(numRows, vector<char>(numCols));

    // Calculate the number of characters that are not needed in the last column
    int extraChars = (numRows * numCols) - ciphertextLength;

    // Fill the matrix with the ciphertext
    int index = 0;
    for (int col = 0; col < numCols; col++) {
        for (int row = 0; row < numRows; row++) {
            if (row >= (numRows - extraChars) && col >= (numCols - extraChars)) {
                matrix[row][col] = ' ';
            } else {
                matrix[row][col] = ciphertext[index++];
            }
        }
    }

    // Sort the key and rearrange the columns accordingly
    string sortedKey = key;
    sort(sortedKey.begin(), sortedKey.end());

    string plaintext;
    for (int col = 0; col < numCols; col++) {
        int colIndex = key.find(sortedKey[col]);
        for (int row = 0; row < numRows; row++) {
            plaintext += matrix[row][colIndex];
        }
    }

    return plaintext;
}

int main() {
    string message, key;

    cout << "Enter the message to encrypt: ";
    getline(cin, message);

    cout << "Enter the encryption key: ";
    getline(cin, key);

    string ciphertext = encrypt(message, key);
    cout << "Encrypted message: " << ciphertext << endl;

    string decryptedMessage = decrypt(ciphertext, key);
    cout << "Decrypted message: " << decryptedMessage << endl;

    return 0;
}
