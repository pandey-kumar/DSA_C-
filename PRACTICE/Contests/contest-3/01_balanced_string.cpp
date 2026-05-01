#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long counta=0;
    long long countb=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') counta++;
        else countb++;
    }
    if(counta==countb) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}