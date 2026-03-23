#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pm;
    cin>>pm;
    int countFail=0;
    int countPass=0;

    for(int i=0;i<n;i++){
        if(arr[i]>=pm)countPass++;
        else countFail++;
    }
    
    cout<<"Pass: "<<countPass<<endl;
    cout<<"Fail: "<<countFail<<endl;
}