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