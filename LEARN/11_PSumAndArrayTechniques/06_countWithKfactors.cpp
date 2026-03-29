#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countFactors(int n){
    int count=0;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i){
                count++;
            }else{
                count+=2;
            }
        }
    }
    return count;
}
int main() {
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    // count factors in array manipulation itself
    for(int i=0;i<n;i++){
        if(countFactors(arr[i])==k){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }

    // prefix sums
    int psum[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psum[i]=sum;
    }

    for(int i=0;i<q;i++){
        int L, R;
        cin>>L>>R;
        L--;R--;
        if(L==0){
            cout<<psum[R]<<endl;
        }else{
            cout<<psum[R]-psum[L-1]<<endl;
        }
    }

}