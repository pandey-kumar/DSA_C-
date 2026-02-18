/* 

In cpp there is inbuilt lexographical check no need to iterate on strings and check


it automaticallly does with comparsion operators

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    if(a<b){
        cout<<'A';
    }
    else if (b<a){
        cout<<'B';
    }
    else if(a==b){
        cout<<"Equal";
    }
}