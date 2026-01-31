#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int ans=0;
    while(n!=0){
        ans=(ans*10)+n%10;
        n=n/10;
    }
    cout<<ans<<endl;
}