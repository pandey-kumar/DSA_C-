#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int idx=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            break;
        }else{
            idx++;
        }
    }
    cout<<(idx+1)%n<<endl;

}
int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        solve();
    }
}