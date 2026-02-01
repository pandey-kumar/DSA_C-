/* 

N= 7


* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 


> HERE you have to mix the upper pyramid and inverted pyramid

n=7   

1 st row -> 1 stars
2nd row  -> 2 stars
.
.
.
.
7th row   ->  7 stars

FROM here its starts to decrease one by one

its starts like from 6th row which is (n-1)th   row and decrease on

6ht row -> 6 stars
5 th row  -> 5stars


1st row  -> 1 star


ALGORITHM :-

you can use two loops 

1. from i=1 till i<=n  printing like pyramid 
1. from i=n-1 till i<=1 printing inverted pyramid







*/










#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;


    // my method:- divide them in upper lower halves:-
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}