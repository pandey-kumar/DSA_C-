/* 
To check prime it must have factors less than 2

so we can make the check on count the number of factors of number
*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountFactors(long long n){
    int count=0;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i)count++;
            else count+=2;
        }
        if(count>2){
            return count;
        }
    }
    return count;
}
int main() {
    long long n;
    cin>>n;
    // handle edge case for 1 which is not a prime number
    if(n==1){
        cout<<"NO";
        return 0;
    }
    int factors=CountFactors(n);
    if(factors>2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }



}
