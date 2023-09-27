#include<iostream>
using namespace std;

int main(){
/*
    2 1 { 2 = rows , 1 = queries}

5 3 4 2 5 1 { 5 , 7 = no. of letters }

7 9 6 8 4 6 7 0

1 2 { row and column}
    
*/
 int n, q;
 cout<<"no. of rows "<<endl;
 cin>>n;
 cout<<"no. of queries "<<endl;
    cin >> q;

    int *mtr[n];

    for(int i=0; i<n; i++){
        int s;
        cin >> s;
        mtr[i] = new int[s];
        for(int j=0; j<s; j++){
            cin>>mtr[i][j];
        }          
    }

    for(int i=0; i<q; i++){
        int r, c;
        cin >> r;
        cin >> c;
        cout << mtr[r][c]<<endl;
    } 
   

   
   
   
    return 0;
}