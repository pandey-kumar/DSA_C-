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
        // Lets sort the array
        sort(arr,arr+n);
        int ans=arr[n-1];
        for(int i=0;i<n-1;i+=2){
            if(arr[i]!=arr[i+1]){
                ans=arr[i];
                break;
            }
        }
        cout<<ans<<endl;


    }

}