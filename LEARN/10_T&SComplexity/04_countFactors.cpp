#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    // As  time limit is 1 sec  
    // we can loop and check till that number because it will take more iterations
    int count=0;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if((n/i)==i)count++; // perfect square case eg 4*4 =16  4 will be count once
            else count+=2;
        }
    }
    cout<<count;
}