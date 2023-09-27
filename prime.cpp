#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    int num = n/2;
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        /* code */
        if (n % i == 0){
            cout<< n <<" is not Prime Number"<<endl;
            flag = 1;
            break;
        }
        
    }
    if (flag==0)
        {
            cout<< n <<" is a prime Number"<<endl;
            // break;
        }
    // cout<<n<<" is a prime number"<<endl;
    

    return 0;
}