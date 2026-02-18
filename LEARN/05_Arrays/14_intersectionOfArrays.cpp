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
    int arr1[n1]; // 2 6 8 5 4 3
    for(int i=0;i<n1;i++)cin>>arr1[i];

    int n2;
    cin>>n2;
    int arr2[n2]; // 2 3 4 7
    for(int j=0;j<n2;j++)cin>>arr2[j];
    // Lets check intersection
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            //check matching or not
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-1; // marking second array elment as used
                break;
            }
        }
    }
    cout<<endl;
}

int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        solve();
    }
    
}