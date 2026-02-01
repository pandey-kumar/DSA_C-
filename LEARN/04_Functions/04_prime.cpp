/* 
Agar ek number ka bas 2 hi factor hai 1 and wo khud
to wo prime hai nahi to nahi.
*/




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countFactors(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count ++;
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"Not Prime";
        return 0;
    }
    int factors=countFactors(n);
    if(factors>2){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }
}