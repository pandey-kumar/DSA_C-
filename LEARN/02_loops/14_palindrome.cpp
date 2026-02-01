#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int reverse(long long int n){
    long long revNumber=0;
    while (n!=0)
    {
        revNumber=(revNumber*10)+n%10;
        n/=10;
    }
    return revNumber;
    
}
int main() {
    long long int n;
    cin>>n;
    long long rev=reverse(n);
    if(rev==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}