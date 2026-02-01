#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long countZeros(long long int n){
    if(n==0) return 1;
    long long count=0;
    while(n!=0){
        int ld=n%10;
        if(ld==0)count++;
        n/=10;
    }
    return count;
}
int main() {
    long long int n;
    cin>>n;
    long long int ans=countZeros(n);
    cout<<ans;
}