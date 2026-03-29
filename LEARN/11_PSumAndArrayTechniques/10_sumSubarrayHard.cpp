/* 
1 2 3

1   = 1
1 2 = 3
1 2 3 = 6  

2
2 3

3



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
        long long sum=0;
        for(int R=L;R<n;R++){
            sum+=arr[R];
            cout<<sum<<endl;
        }
    }
    
}