#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char lowerCase(char ch){
    
    
    if(ch >= 'a' && ch <='z'){
        return ch;
    }
    else if(ch >= 'A' && ch <='z')
        {
            char temp=ch+32;
            return temp;
    }
}

bool isValid(string s){
    
    int st=0;
    int e=s.size()-1;
    int i=0;
    while(i<=e){
        if(( s[st] !='a' && s[st]!='z') ||(s[st]!='0' && s[st]!='9') ||(s[st] !='A' && s[st]!='Z')  ){
            return true;
        }
        else{
            return false;
        }
    }
}

void rev(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
        
    }
}

int length(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    
    return count;
    
}
string removal(string s){
    int i=0;
    string cleanString;
    while(i<=s.size()){
        if(( s[i] >'a' && s[i]!='z') ||(s[i]!='0' && s[i]!='9') ||(s[i] !='A' && s[i]!='Z')){
            cleanString +=s[i];
        }
        i++;
    }
    return cleanString;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    string str= removal(s);
    int st=0;
    int end=str.size()-1;
    
    
    while(st<end ){
        // int x=length(s);
        

        if(lowerCase(str[st])!=lowerCase(str[end])){
            return false;
        }
        else{
            st++;
            end--;
        }
    }
    return true;
}


int main(){
    char a[20];
    cin>>a;
    int n=length(a);
    // // rev(a,n);
    
    cout<<checkPalindrome(a);
    
    
    return 0;
}