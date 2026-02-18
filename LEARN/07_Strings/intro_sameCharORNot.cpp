/* 
Given two characters check wether they are same or not ?


a x  -> NO

a a  -> yes



// SOME OF THE IMPORTANT ASCII VALUES:-

1. numbers  in char format   '1' not this 1:--

'0'- 48
'1'- 49
.
.
.
.
'9'- 57

2. CAPITAL LETTERS:-

1. A- 65
2. B- 66
.
.
.
.
.
  Z- 90


  3. small letters :- 

1. a- 97
2. b- 98
.
.
.
.

. z- 122


// Some important points :-


1. to take input strings we use

string s; // "shubham"
cin>>s; 
cout<<s; // "shubham"

2. to take input for sequence of scentence:-

"hello how are you"

// we generally use getline(cin,s)

string s;
getline(cin,s); // to take whole line as input
cout<<s; "hello how are you"



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // char a,b;
    // cin>>a>>b;
    // if(a==b)cout<<"YES";
    // else cout<<"NO";


    // suppose we forget than can we print them and check

    char ch='a';
    char ch2='A';
    char ch3='0';
    cout<<ch<<" "<<ch2<<" "<<ch3<<endl;

    // we can print the ascii values by typecasting 
    // in the integer format
    cout<<(int)ch<<" "<<(int)ch2<<" "<<(int)ch3<<endl;
}