/* 

O(n2)

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long finalSum=0;
    long long psum[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psum[i]=sum;
    }
    for(int L=0;L<n;L++){
        for(int R=L;R<n;R++){
            if(L==0) finalSum+=psum[R];
            else finalSum+= (psum[R]-psum[L-1]);
        }
    }
    cout<<finalSum<<endl;

}