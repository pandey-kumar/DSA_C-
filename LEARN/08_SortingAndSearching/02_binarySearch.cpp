/* 

Binary Search :-

make three pointers 

n =size of arr

l=0(start) ,r=n-1 (end)
mid at  (l+r)/2

now use while loop condition till l<=r

if( arr[mid]==target) :-
    make flag true and break;
else if (arr[mid]<target) :-
    // dicard all in left of mid
    l=mid+1
else :-
    //dicard all in right of mid
    r=mid-1


*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long tar;
    cin>>tar;

    int l=0;
    int r=n-1;
    long long mid;;

    bool flag=false;

    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==tar){
            flag=true;
            break;
        }
        else if (arr[mid]<tar){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}