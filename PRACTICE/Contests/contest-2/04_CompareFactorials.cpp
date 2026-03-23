#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin>>a>>b;
     if(a==0 and b==0 || a==1 and b==1 || a==0 and b==1 || a==1 and b==0 || a==b ){
        cout<<"Yes";
     }else{
        cout<<"No";
     }


}