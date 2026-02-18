/* 
Algorithm :-

For reversing the array inplace we can use two pointers 


>take two var i and j ; i=0  and j=end
>use while loop untill i<=j
>try to swap their positions 






*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}