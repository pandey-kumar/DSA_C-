/* 

Right angled Pyramid :-


 say n=5


    *
   **
  ***
 ****
*****

// Here we are going to play with the * and spaces as well

n=5


1 st row -> 4 spaces   and 1 star
2 nd row -> 3 spaces   and 2 stars
3 rd row -> 2 spaces   and 3 stars
4 th row -> 1 space   and 4 stars
5 th row -> 0 space   and 5 stars

// Lets generalise this

nth row  --> n-1 space and n stars

use this logic simply 

> start loop from i=1 to i<=n :-
    > make a sub loop form i=1 to i<=n-i and print spaces
    >make another sub loop from j=1 to i<=i and print stars
    >after two inner loops one line break


*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // My method :- look summation for pattern:-

    

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i+j>n){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // MEthod 2:-

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}