/* 
Algo :-

[1,5,3,7,8,10]

max=arr[0]
sec_max=-1;

will check if arr[i]>max  then make sec_max=max and max=arr[i];



*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int sec_max=-1;
    int max=arr[0];

    // find maximum
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
    }

    //find second maximum

    for(int i=0;i<n;i++){
        if(arr[i]>sec_max and arr[i]!=max){
            sec_max=arr[i];
        }
    }
    cout<<sec_max;


    
    
}