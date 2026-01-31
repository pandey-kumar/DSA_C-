#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long facto=1;
    for(int i=n;i>=1;i--){
        facto*=i;
    }
    cout<<facto;
}