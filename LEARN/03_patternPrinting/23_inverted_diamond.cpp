/* 

n=5

***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****



look here 

invert this part on its top :-


*         *
**       **
***     ***
****   ****
***** *****


You will get this :-


5    ***** *****
4    ****   ****
3    ***     ***
2    **       **
1    *         *
2    **       **
3    ***     ***
4    ****   ****
5    ***** *****


print those rows wriitne on the left side look nicely 






*/











#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;


    for(int i=n;i>=2;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(2*n-2*i)+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(2*n-2*i)+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}