#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,n;
    cin>>x>>n;
    long long answer=1;
    for (int i=1;i<=n;i++){
        answer*=x;
    }
    cout<<answer;

}