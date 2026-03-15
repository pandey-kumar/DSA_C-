#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // fill all wiht zero
    vector<int>ans(n,0);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[j]=arr[i];
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        solve();
    }
}