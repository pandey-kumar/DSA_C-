/* 
NOW YOU HAVE TO MAKE A PERFECT TRIANGLE :-

N= 5


    *
   * *
  * * *
 * * * *
* * * * *


// ALGO

 say n=5


    *
   **
  ***
 ****
*****


+

if you start printnig one space after the star like this "* " we can get pure traingle:-


    *
   * *
  * * *
 * * * *
* * * * *


// but here in end there is also space after every triangle if you dont want that try to 
use the boundary end condition to print only there "*" and not "* ";

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
    //             cout<<"* ";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // MEthod 2:-

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if(j==i){
    //             cout<<"*";
    //         }else{

    //             cout  << "* ";
    //         }
    //     }
    //     cout << endl;
    // }
}