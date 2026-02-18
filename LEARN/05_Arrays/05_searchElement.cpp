#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}