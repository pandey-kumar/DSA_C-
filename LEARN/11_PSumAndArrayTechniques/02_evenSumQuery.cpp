/* 
if we need only even indices then make all odd indices 0 
because of no uses 


*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0) arr[i]=0;
    }

    long long psum[n];
    long long  sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psum[i]=sum;
    }

    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
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