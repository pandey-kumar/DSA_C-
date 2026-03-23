#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    //  time limit is -  0.5 sec
    // N value can go upto  2*10^9

    // we have to do this in this complexity
    long long n;
    cin>>n;
    // Use maths solve in one go

    long long sum= n*(n+1)/2;
    cout<<sum;
}