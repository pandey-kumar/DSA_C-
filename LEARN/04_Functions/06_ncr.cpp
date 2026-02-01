#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int main() {
    int n,r;
    cin>>n>>r;
    long long nfacto=factorial(n);
    long long rfacto=factorial(r);
    long long n_r_facto=factorial(n-r);
    cout<<(nfacto/(rfacto*n_r_facto));
}