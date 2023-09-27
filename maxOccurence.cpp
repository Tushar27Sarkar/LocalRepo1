#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char maxOccurence(string s){
    int arr[26]={0};
    
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            count=s[i] - 'a';
            arr[count]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            count=s[i] - 'A';
            arr[count]++;
        }
    }
    int max=-1;int ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    char finalChar=ans+'a';
    return finalChar;

}
int main(){
    string str;
    cin>>str;
    cout<<maxOccurence(str)<<endl;
    return 0;
}