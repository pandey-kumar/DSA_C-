/* 
To find the sum of all sub arrays seperately easy:-

1. we can do similar iterations find the sum

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    // lets find the sum
    for(int L=0;L<n;L++){
        for(int R=L;R<n;R++){
            long long sum=0;
            for(int i=L;i<=R;i++){
                sum+=arr[i];
            }
            cout<<sum<<endl;
        }
    }
    
}