#include<iostream>
using namespace std;
struct employee
{
   int eID;
   char favChar;
   float salary;
};
union money
{
    /* data */
    int rice ;
    char car ;
    float pound;
};



int main(){
     enum num{abc,dhj,hgjhg,tytu,bmnbm,io};
     
     
    struct employee harry;
    
    harry.eID =1;
    harry.favChar='c';
    harry.salary=4535;
    union money m1;
     m1.rice =34;
    m1.car='c';
    m1.pound=45.67;
    cout<<m1.pound;
    return 0;
}