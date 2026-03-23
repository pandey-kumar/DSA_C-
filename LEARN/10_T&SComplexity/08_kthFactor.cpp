#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,k;
    cin>>n>>k;
    vector<long long> ans;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i){
                ans.push_back(i);
                break;
            }else{
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size()<k){
        cout<<-1<<endl;
    }else{
        cout<<ans[k-1]<<endl;
    }

}