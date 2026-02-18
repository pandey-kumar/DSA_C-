/* 

lowercase-  between   a to z
uppercase - between A to Z
digit - between '0' to '9'

else special



*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(ch>='a' and ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>='A' and ch<='Z'){
        cout<<"Uppercase";
    }
    else if (ch>='0' and ch<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special";
    }
    
}