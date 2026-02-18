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

    int midx=1;
    int mival=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<mival){
            mival=arr[i];
            midx=i+1;
        }
    }
    cout<<mival<<" "<<midx;

}