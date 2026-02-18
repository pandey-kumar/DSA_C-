/* 
Algorithm :-

1. based on indices use if else to print columns form up to down and down to up
 if col even :- top to down
 if col odd :- down to top





*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // Lets print them based on the condition
    for(int j=0;j<m;j++){
        if(j%2==0){
            // top to down
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // down to top
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
  


}