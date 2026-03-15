/* 

To rotate array by D postions 

1. reverse a part of array before D index
2. reverse a part of array from D index to end
3.reverse whole array
4. Dont forget to do modulo of D with length of array to avoid
   overflow


   example :-

1 2 3 4 5 6 7

d=2


    

*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversePart(long long int arr[],int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;r--;
    }
}

void solve(){
    long long n;
    cin >> n;

    if(n == 0){
        long long d;
        cin >> d;   // still read D
        cout << endl;
        return;
    }

    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    long long d;
    cin >> d;

    if(n>0){  // by pass division in this case 
    d = d % n;
    }

    reversePart(arr,0,d-1);
    reversePart(arr,d,n-1);
    reversePart(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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