/* 

Algorithm :-


we generally follow a standard template 

1. take two pointers i=0 and j=0;
2. use while loop till i<n and j<n
3. make sum=0 outside and make sum+=arr[i][j]
4. i++ nd j++



// Similarly we can sum right diagoanal 

//  start i=0 and j=n-1 and make i++ and j--

*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //diagonal left sum 
    // diagonal will be   i,i or j,j

    int i=0;
    int j=0;
    int sum=0;
    while(i<n and j<n){
        // sum+=arr[i][i];
        // sum+=arr[i][j];
        sum+=arr[j][j];
        i++;
        j++;
    }

    cout<<sum;
}