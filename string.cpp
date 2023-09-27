#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SpaceCount(string s){
    int n=s.size();
    int i=0;
    int count =0;
    while(i<n){
        if(s[i]==' '){
            count++;
        }
        i++;
    }
return count;
}

string rev(string s){
    int count= SpaceCount(s);
    string str;
    int n= s.size()-1;
    for(int i=n;i>=0;i--){
        if((s[i]==' ') && (s[i+1]>='a' && s[i+1] <='z' )  ){
            if(s[i+1]==' '){
                break;
            }
            str+=s[i];
        }
        else if((s[i]==' ') && (s[i+1]>='A' && s[i+1] <='Z' )  ){
            if(s[i+1]==' '){
                break;
            }
            str+=s[i];
        }
        str+=' ';
    }
    return str;
}
int main(){
    string str=" hello world ";
    int a=str.size();
    int count= SpaceCount(str);
    cout<<count;
    return 0;
}