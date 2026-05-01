#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    unordered_map<long long,long long>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]++;
        }else{
            mp[arr[i]]=i+1;
        }
    }

    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        if(mp.find(num)==mp.end()){
            cout<<-1<<endl;
        }else{
            cout<<mp[num]<<endl;
        }
    }

}