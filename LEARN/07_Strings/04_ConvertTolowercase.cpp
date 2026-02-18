/* 

a-  97

A-  65


diffrence is of 32

Lower to upper => subtract 32 

and vice versa

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        ch+=32;
    }
    cout<<ch;
    
}