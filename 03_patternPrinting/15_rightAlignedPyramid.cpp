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