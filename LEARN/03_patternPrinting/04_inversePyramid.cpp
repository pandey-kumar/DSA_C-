
/* 

n=5

*****
****
***
**
*


Algo :-

1st row --- n stars
2nd row --- n-1 stars
.
.
.
nth row --- 1 star


reverse outer loop


*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}


