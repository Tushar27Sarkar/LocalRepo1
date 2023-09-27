#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rev(string &str, int i,int j){
    if(i>j) return ;

    swap(str[i],str[j]);
    i++;
    j--;
    rev(str,i,j);

}
int main(){
    string str="Tushar";
    int i=0;
    int j=5;
    // cout<<str.length();
    rev(str,i,5);
    cout<<str;

    return 0;
}