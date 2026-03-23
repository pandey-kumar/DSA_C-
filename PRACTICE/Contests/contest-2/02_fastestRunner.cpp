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
    int id=0;
    int minmTime=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=minmTime){
            minmTime=arr[i];
            id=i;
        }
    }
    cout<<id+1<<endl;


}