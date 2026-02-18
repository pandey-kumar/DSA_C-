#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0;
        int m=1;
        while(l<m && l<n && m<n){
            swap(arr[l],arr[m]);
            l+=2;
            m+=2;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}