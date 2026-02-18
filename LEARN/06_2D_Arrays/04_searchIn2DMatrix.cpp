#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,v;
    cin>>n>>m>>v;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // Lets search v :-
    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==v){
                flag=true;
                break;
            }
        }
    }
    if(flag)cout<<"true";
    else cout<<"false";

}