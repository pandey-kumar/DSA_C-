#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long sumDigits(long long num){
    long long sum=0;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        long long num;
        cin>>num;
        if(sumDigits(num)==7){
            cout<<"Thala for a reason"<<endl;
        }else{
            cout<<"Blocked for no reason"<<endl;
        }
    }
}