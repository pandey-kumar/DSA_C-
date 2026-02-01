
 
/* 

n=5

*
**
***
****
*****

Algo :- 

1 row   1 star
2nd row   2 stars
.
.
.
nth row  n stars



*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}