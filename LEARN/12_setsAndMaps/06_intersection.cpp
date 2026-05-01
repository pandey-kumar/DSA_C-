#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,m;
    cin>>n;
    long long arr[n];
    set<long long>st1;
    set<long long>st2;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st1.insert(arr[i]);
    }
    cin>>m;
    long long arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        st2.insert(arr2[i]);
    }
    
    set<long long>st3;
    
    for(auto it:st1){
        if(st2.find(it)!=st2.end()){
           st3.insert(it);
        }
    }
    cout<<st3.size()<<endl;
    for(auto it:st3){
        cout<<it<<" ";
    }

    

}