/* 
Algorithm :-

arr= [1,2,3,4,5]

psum1=[1,-1,2,-2,3]

// indices  1 to 3

2-3+4 = 3 psum1[3] - psum1[0] => -2-1 = -3  => -(-3)= 3 ans

// 1 to 4

2-3+4-5=-2  => 3-1= 2 => -(2) ans

// oberve this if any query starts even indices loke 0 2 4 
// they will follow normal rule

//but for odd indices we have to 




*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // psum (alternate)
    // arr =[1,2,3,4,5]
    // psum=[1]
    long long psumAlter[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }else{
            sum-=arr[i];
        }
        psumAlter[i]=sum;
    }
    for(int i=0;i<q;i++){
        int L,R;
        cin>>L>>R;
        L--;R--;
        if(L==0){
            cout<<psumAlter[R]<<endl;
        }else{
            long long ans=psumAlter[R]-psumAlter[L-1];
            if(L%2==0){
                cout<<ans<<endl;
            }else{
                cout<<-ans<<endl;
            }
        }
    }
    
    
}