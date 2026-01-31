#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    int y;
    int z;
    cin>>x>>y>>z;
    int min=0;
    int max=0;
    if(x>=y and x>=z) max=x;
    else if(y>=x and y>=z) max=y;
    else max=z;
    if(x<=y and x<=z)min=x;
    else if(y<=x and y<=z) min=y;
    else min=z;
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max<<endl;
}