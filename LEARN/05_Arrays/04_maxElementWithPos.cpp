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

    int maxidx=1;
    int maxval=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>maxval){
            maxval=arr[i];
            maxidx=i+1;
        }
    }
    cout<<maxval<<" "<<maxidx;

}