#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0)count0++;
        else if(arr[i]==1)count1++;
        else if(arr[i]==2)count2++;
    }

    for(int i=1;i<=count2;i++){
        cout<<2<<" ";
    }
    for(int i=1;i<=count1;i++){
        cout<<1<<" ";
    }
    for(int i=1;i<=count0;i++){
        cout<<0<<" ";
    }


}