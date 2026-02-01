#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int pos=0,neg=0,even=0,odd=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val%2==0)even++;
        if(val%2!=0)odd++;
        if(val>0)pos++;
        if(val<0)neg++;
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;


}