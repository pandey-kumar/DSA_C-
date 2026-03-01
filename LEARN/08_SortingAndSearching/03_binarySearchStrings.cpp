

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    string target;
    cin>>target;

    // use binary search to find the targget.
    bool flag=false;

    int l=0;
    int r=n-1;

    while(l<=r){
        long long mid=(l+r)/2;
        if(arr[mid]==target){
            flag=true;
            break;
        }
        else if (arr[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    if(flag)cout<<"YES";
    else cout<<"NO";
}