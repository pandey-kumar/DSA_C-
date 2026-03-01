/* 
n=5

>
 > >
  >   >
   >     >
    >       >
   >     >
  >   >
 > >
>


*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n; // 5
    if(n==1){
        cout<<">"<<endl;
        return 0;
    }

    cout<<">"<<endl;
    int nsp=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<">";
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        cout<<">";
        cout<<endl;
    }

    // downwards

    nsp-=2;
    for(int i=n-1;i>=2;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<">";
        nsp-=2;
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        cout<<">";
        cout<<endl;
    }
    cout<<">";
 

}