#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        for(int i=1;i<=num;i+=2){
            cout<<i<<" ";
        }
        if(num%2!=0) num--;
        for(int i=num;i>=2;i-=2){
            cout<<i<<" ";
        }
        
        cout<<endl;

    }
}