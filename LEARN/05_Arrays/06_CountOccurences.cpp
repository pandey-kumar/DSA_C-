#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    
    int count =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==x)count++;
    }
    cout<<count;



}