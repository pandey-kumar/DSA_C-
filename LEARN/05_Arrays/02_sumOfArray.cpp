#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long sum=0;

    long long arr[n];
    for(long i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum;

}