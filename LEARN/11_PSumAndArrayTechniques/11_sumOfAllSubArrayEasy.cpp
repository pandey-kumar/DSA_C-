#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    // sum of all sub arrays

    long long Finalsum=0;
    for(int L=0;L<n;L++){
        for(int R=L;R<n;R++){
            // we will get [L,R]
            long long sum=0;
            for(int i=L;i<=R;i++){
                sum+=arr[i];
            }
            Finalsum+=sum;
        }
    }
    cout<<Finalsum<<endl;
}