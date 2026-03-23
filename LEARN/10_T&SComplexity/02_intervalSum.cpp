

/* 

Algo 

for any interval inclusive 


find sumBeforeLeftTerm 
find sumtillLastTerm and subtract




*/







#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    long long sumBeforeLeft=0;
    long long TotalSumTillRight=0;
    for(int i=0;i<tc;i++){
    long long l;
    long long f;
    cin>>l>>f;
    l=l-1;
    sumBeforeLeft=l*(l+1)/2;
    TotalSumTillRight=f*(f+1)/2;
    cout<<TotalSumTillRight-sumBeforeLeft<<endl;
    }

}