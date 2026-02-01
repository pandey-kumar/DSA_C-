/* 

n=5

1
22
333
4444
55555


Algo :-

har row me utne hi print of number jitne row number

1 st row -   1 baar 1
2nd row --  2 baar 2


print i this time till i times only

*/





#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}