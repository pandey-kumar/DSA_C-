#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}