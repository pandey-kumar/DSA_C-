#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int sum=0;
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout<<sum;

}