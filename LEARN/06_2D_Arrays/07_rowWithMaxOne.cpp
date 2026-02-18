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

    // row with maxMOnes
    int maxOne=0;
    int maxoneIdx=-1;
    for(int i=0;i<n;i++){
        int maxOneCount=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1) maxOneCount++;
        }
        if(maxOneCount>maxOne){
            maxOne=maxOneCount;
            maxoneIdx=i;
        }
    }
    cout<<maxoneIdx;


}