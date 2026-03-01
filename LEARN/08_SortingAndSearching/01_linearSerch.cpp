/* 
Linear Search :- 

simply make a bool flag=false

linearly traverse in the array and if we get that element
make flag=true and break out

check flag and display yes or no

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long long t;
    cin>>t;

    // Linear Search :-
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}