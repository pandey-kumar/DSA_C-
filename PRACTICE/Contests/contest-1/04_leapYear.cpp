#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n%100==0 and n%400==0){
        cout<<"Yes";
    }
    else if(n%100!=0 and n%4==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}