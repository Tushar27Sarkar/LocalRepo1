#include<iostream>
using namespace std;

int main(){
    int a,b;
    // cout<<"for rows "<<endl;
    cin>>a;
    // cout<<"for queries "<<endl;
    cin>>b;
    int *mtr[a];
    for (int i = 0; i < a; i++)
    {
        /* code */
        int c;
        // cout<<" enter How many elements "<<endl;
        cin>>c;
        mtr[i]= new int[c];
            for (int j = 0; j < c; j++)
        {
            /* code */
            cin>>mtr[i][j];
        }
        
        
        
    }
    for (int i = 0; i < b; i++)
        {
            /* code */
            // cout<<"for searching"<<endl;
            int d,e;
            cin>>d;
            cin>>e;
             cout<<mtr[d][e]<<endl;

        }
    
    
    return 0;
}
// int n, q;
//  cout<<"no. of rows "<<endl;
//  cin>>n;
//  cout<<"no. of queries "<<endl;
//     cin >> q;

//     int *mtr[n];

//     for(int i=0; i<n; i++){
//         int s;
//         cin >> s;
//         mtr[i] = new int[s];
//         for(int j=0; j<s; j++){
//             cin>>mtr[i][j];
//         }          
//     }

//     for(int i=0; i<q; i++){
//         int r, c;
//         cin >> r;
//         cin >> c;
//         cout << mtr[r][c]<<endl;
//     } 
   

   
   
   
//     return 0;
// }