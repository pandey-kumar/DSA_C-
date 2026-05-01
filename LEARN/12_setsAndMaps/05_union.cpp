#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,m;
    cin>>n;
    long long arr[n];
    set<long long>st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    cin>>m;
    long long arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        st.insert(arr2[i]);
    }

    cout<<st.size()<<endl;
    for(auto it:st){
        cout<<it<<" ";
    }

    

}