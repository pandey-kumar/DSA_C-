#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long year=0;
    long long month=0;
    long long days=0;
    if(n>=365){
        year=n/365;
        n%=365;
    }
    if(n>=30){
        month=n/30;
        n%=30;
    }
    days=n;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;
}