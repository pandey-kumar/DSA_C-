#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i= (n/2)-1;
    int j=n/2;
    while(i>0 or j<n){
        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";
        i--;
        j++;
    }
}