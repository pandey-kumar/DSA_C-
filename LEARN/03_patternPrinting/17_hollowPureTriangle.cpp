/* 






n=6


     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 



use same right angled trikangle logic with space star print and use boundary condition to print the stars else not



*/




#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // write code for pure triangle and
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            
            // add boundary conditons where star is printed
            if(j==1 or j==i or i==1 or i==n){
                cout << "* ";
            }else{
                //increase one space 
                cout<<"  ";
            }
        }
        cout << endl;
    }
}