#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;

    // 1. This will fail for test case having zero in end
    
    // int answer=0;
    // while(n!=0){
    //     int ld=n%10;
    //     answer=(answer*10)+ld;
    //     n/=10;
    // }
    // cout<<answer;

    //Edge case
    if(n==0) {
        cout<<0;
        return 0;
    }
    while(n!=0){
        cout<<n%10;
        n/=10;
    }
}