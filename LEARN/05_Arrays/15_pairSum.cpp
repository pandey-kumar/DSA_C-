/* 


// You can also make visited array of boolen and make that index visited as true

//check everytime wether it is visite d or not 

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n1;
    cin>>n1;
    int arr1[n1]; 
    for(int i=0;i<n1;i++)cin>>arr1[i];


    int tar;
    int count=0;
    cin>>tar;
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            if(arr1[i]+arr1[j]==tar){
                count++;
            }
        }
    }
    cout<<count<<endl;

  
}

int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        solve();
    }
    
}