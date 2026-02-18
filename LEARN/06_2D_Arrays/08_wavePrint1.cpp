/* 
Algorithm :-

1. based on indices use if else to print rows form right to left and left to right
2. if row is even :- left to right
3. if odd :- right to left





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
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }

        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }

        }
    }
    
  


}