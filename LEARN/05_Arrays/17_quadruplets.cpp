/*


// You can also make visited array of boolen and make that index visited as true

//check everytime wether it is visite d or not

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1,tar;
    cin >> n1>>tar;
    int arr1[n1];
    for (int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            for (int k = j + 1; k < n1; k++)

            {
                for (int l = k + 1; l < n1; l++)
                {
                    if (arr1[i] -(2* arr1[j]) + (3*arr1[k]) -(4* arr1[l]) == tar)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
        solve();
}