/* 
Algo:-  spiral matrix
 
Start

Input

Read number of rows n and columns m.

Input matrix arr[n][m].

Initialize variables

sr = 0, sc = 0

er = n - 1, ec = m - 1

Repeat while sr ≤ er and sc ≤ ec

Traverse Left → Right

Print elements from arr[sr][sc] to arr[sr][ec].

Traverse Top → Bottom

Print elements from arr[sr+1][ec] to arr[er][ec].

Traverse Right → Left (if sr ≠ er)

Print elements from arr[er][ec-1] to arr[er][sc].

Traverse Bottom → Top (if sc ≠ ec)

Print elements from arr[er-1][sc] to arr[sr+1][sc].

Update boundaries

sr++, sc++, er--, ec--

Stop when condition becomes false


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

    //Start traversal

    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=m-1;
    while(sr<=er and sc<=ec){

        // left to right 
        // from sc to ec and sr will be constant
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }

        // top to down
        // from sr+1 to er and ec will be constant

        for(int i=sr+1;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }

        // right to left :-
        //from ec-1 to sc and er will be constant
        
        if(sr!=er){
        for(int i=ec-1;i>=sc;i--){
            cout<<arr[er][i]<<" ";
        }
    }

        // from bottom to top
        //from er-1 to sr-1 and sc will be constant
        if(sc!=ec){
        for(int i=er-1;i>=sr+1;i--){
            cout<<arr[i][sc]<<" ";
        }
    }

        sr++;
        sc++;
        er--;
        ec--;
    }
    
}