#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long dsum=0;
    long long ndsum=0;
    long long arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j or i+j==n-1) dsum+=arr[i][j];
            else ndsum+=arr[i][j];
        }
    }
    cout<<dsum<<" "<<ndsum<<endl;

}