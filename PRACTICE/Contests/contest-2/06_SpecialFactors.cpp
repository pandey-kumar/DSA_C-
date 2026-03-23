#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            int num=i;
            if(num%10==2 or num%10==7){
            flag=true;
            cout<<i<<" ";
            }
        }
    }
    if(!flag) cout<<-1;
}