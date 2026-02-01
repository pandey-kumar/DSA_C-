
/* 


n=6

0
10
010
1010
01010
101010

// whenever is the concept of alternate think about odd even

> odd rows pe 0 se start hota hia
>even rows pe 1 se start hota hai

uske badd alternate chalne lagta hia hamesha


flag bana lo :-  start ke naam agar odd row hai to start 0 nahi to 1

aur pyramid pattern banane ke liye  inner loop i tak chalega

start ko print kar lo aur aage fir check laga lo 

agar start 0 hai to start ko 1 kar lo nahi to 0 karlo  alternate printing ke liye






*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;


    // whenever is the concept of alternate think about odd even

    for(int i=1;i<=n;i++){
        int start=0;
        if(i%2!=0){
            start=0;
        }else{
            start=1;
        }
        for(int j=1;j<=i;j++){
            cout<<start;
           if(start==0){
                start=1;
           }else{
            start=0;
           }
        }
        cout<<endl;
    }
}