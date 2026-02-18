#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    string ans="";
    char a;
    cin>>a;

    for(int i=0;i<s.size();i++){
        if(s[i]!=a){
            ans+=s[i];
        }
    }
    cout<<ans;



}