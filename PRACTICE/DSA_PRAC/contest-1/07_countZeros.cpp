#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long countZero=0;
    if(n==0)countZero++;
    while(n!=0){
        long long int ld=n%10;
        if(ld==0) countZero++;
        n/=10;
    }
    cout<<countZero;
}