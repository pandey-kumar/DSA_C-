#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long countGood=0;
    for(long long i=1;i<=n;i++){
        long long num;
        cin>>num;
        if(num==0){
            countGood++;
        }
        else if(18%num==0 || num%45==0){
            countGood++;
        }
    }


    cout<<countGood;

}