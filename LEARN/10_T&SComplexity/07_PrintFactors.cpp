#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printFactors(long long n){
    vector<long long>ans;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i){
                ans.push_back(i);
            }else{
                ans.push_back(n/i);
                ans.push_back(i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    // printing them :-

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
int main() {
    long long n;
    cin>>n;
    printFactors(n);
}