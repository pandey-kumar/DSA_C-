#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool countOccurence(int num,long long arr[],int sz){
    int count=0;
    for(int i=0;i<sz;i++){
        if(arr[i]==num)count++;
        if(count>2)break;
    }
    if(count==1) return true;
    else return false;
}

int main() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(countOccurence(arr[i],arr,n)){
            flag=false;
            cout<<arr[i]<<" ";
        }
    }
    if(flag==true)cout<<" ";


}