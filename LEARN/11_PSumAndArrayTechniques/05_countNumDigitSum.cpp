#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumDigit(long long n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    long long n,q,k;
    cin>>n>>q>>k;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(sumDigit(arr[i])==k){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }
    long long psum[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psum[i]=sum;
    }

    for(int i=0;i<q;i++){
        int L,R;
        cin>>L>>R;
        L--;R--;
        if(L==0){
            cout<<psum[R]<<endl;
        }else{
            cout<<psum[R]-psum[L-1]<<endl;
        }
    }

}