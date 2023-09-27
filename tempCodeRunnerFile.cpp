#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

unsigned long gcd(unsigned long a, unsigned long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

unsigned long modInverse(unsigned long e, unsigned long k) {
    for (unsigned long d = 1; d < k; d++) {
        if ((d * e) % k == 1) {
            return d;
        }
    }
    return 0;
}

int main() {
    unsigned long p, q, n, k, e, d;
    unsigned long cipher, plain;
    char message[80];
    unsigned char encrypt[80], decrypt[80];
    unsigned int len;

    cout << "Enter P and Q (prime numbers): ";
    cin >> p >> q;
    
    n = p * q;
    k = (p - 1) * (q - 1);

    cout << "Enter the value of public key (e): ";
    cin >> e;

    d = modInverse(e, k);
    
    cout << "Public Key (e) = " << e << ", Private Key (d) = " << d << endl;

    cout << "Enter the message: ";
    cin.ignore();
    cin.getline(message, 80);
    len = strlen(message);

    for (unsigned int i = 0; i < len; i++) {
        unsigned long M = message[i];
        unsigned long C = 1;

        for (unsigned long j = 0; j < e; j++) {
            C = (C * M) % n;
        }

        encrypt[i] = static_cast<unsigned char>(C);
    }

    cout << "Encrypted Message: ";
    for (unsigned int i = 0; i < len; i++) {
        cout << encrypt[i];
    }
    cout << endl;

    for (unsigned int i = 0; i < len; i++) {
        unsigned long M = 1;
        unsigned long C = encrypt[i];

        for (unsigned long j = 0; j < d; j++) {
            M = (M * C) % n;
        }

        decrypt[i] = static_cast<unsigned char>(M);
    }

    cout << "Decrypted Message: ";
    for (unsigned int i = 0; i < len; i++) {
        cout << decrypt[i];
    }
    cout << endl;

    return 0;
}
