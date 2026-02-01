#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int solve(int n){
    long long int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main() {
    int n;
    cin>>n;
    long long int ans=solve(n);
    cout<<ans;
}