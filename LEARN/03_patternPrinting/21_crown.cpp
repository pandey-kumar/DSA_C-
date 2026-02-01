/* 

n=7

*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************


you can generalise this like this :-


1st row -> 1 star  12 spaces 1star
2nd row -> 2stars  10 spaces 2 stars
.
.
.
.

7th row -> 7stars  0 sapces 7 stars

// use summation logic :-    always 14 ratio is there

i th row -> i stars 2n-2*i sapces i satrs


> run outer loop from i=1 to i<=n and :-
    > run inner loop1 from j=1 to j<=i and print *
    > run inner loop2 from k=1 to k<=2*n-2  and print " "
    > run inner loop3 from l=1 to l<=i and print "*" 
>after innner loop give line break










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
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}