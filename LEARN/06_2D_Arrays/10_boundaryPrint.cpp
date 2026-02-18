/* 
Algorithm :-

// break this in four parts

// 1. left to right
//2. top to bottom
//3. right to left 
//4. bottom to top



// Dont forget to add the edge cases in case of only one row or column

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

    // edge case of only one row or column

    if(n==1 || m==1){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    // Other wise traverse as above
    else{

    // Lets print them based on the condition

    // Left to right 
    for(int j=0;j<m;j++){
        cout<<arr[0][j]<<" ";
    }

    // top to down
    for(int i=1;i<n;i++){
        cout<<arr[i][m-1]<<" ";
    }

    // right to left

    for(int j=m-2;j>=0;j--){
        cout<<arr[n-1][j]<<" ";
    }

    //down to up

    for(int i=n-2;i>=1;i--){
        cout<<arr[i][0]<<" ";
    }

}
 
  


}