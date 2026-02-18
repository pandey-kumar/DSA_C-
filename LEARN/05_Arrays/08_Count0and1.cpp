#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sz;
        cin>>sz;
        int count0=0;
        int count1=0;
        long long arr[sz];
        for(int i=0;i<sz;i++){
            cin>>arr[i];
            if(arr[i]==0) count0++;
            if(arr[i]==1) count1++;
        }
        for(int i=1;i<=count0;i++){
            cout<<"0"<<" ";
        }
        for(int i=1;i<=count1;i++){
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
}