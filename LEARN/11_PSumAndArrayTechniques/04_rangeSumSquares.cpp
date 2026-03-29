#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    int arr[n]; // 1 3 4 5
    long long psum[n]; 
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // Note both are int so multiplication must will give overflow
        // way 1:- long long square=1LL*arr[i]*arr[i]; // internaly converted to longlong
        // way 2:-
        long long x=arr[i];
        long long square=x*x;
        sum+=square;
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