/* 
Counting primes :-

use a extra loop  to count till that number for primes and in every loop count factors

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int CountFactors(int n){
    int count=0;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i)count++;
            else count+=2;
        }
        if(count>2) return count;
    }
    return count;
}


int main() {

    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    int countPrime=0;
    for(int i=2;i<=n;i++){
        int factors=CountFactors(i);    
        if(factors<=2) countPrime++;
    }
    cout<<countPrime<<endl;

    
}