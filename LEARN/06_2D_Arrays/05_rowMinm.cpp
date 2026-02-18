#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //lets print row minm
    for(int i=0;i<n;i++){
        int minVal=INT_MAX;
        for(int j=0;j<m;j++){
            if(arr[i][j]<minVal) minVal=arr[i][j];
        }
        cout<<minVal<<" ";
    }


}