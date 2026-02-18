#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int countSpaces=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')countSpaces++;
    }
    // no of words - TotalSpaces+1;

    cout<<countSpaces+1;
}