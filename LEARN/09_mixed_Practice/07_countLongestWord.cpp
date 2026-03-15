/* 
My method using simple for loop


Method 2:- 

use two pointer again to solve it out 

>make maxLength=0;
> put i on first string and j on i and move untill i<s.size()
>check if s[i] is space then do i++ and continue.
>otherwise if(s[j]!= space) then do count ++.
> compare with maxElement and update count.


*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int maxLength=0;

    // i am learning DSA

    // MEthod 1:-

    // int length=0;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]!=' '){
    //         length++;
    //         continue;
    //     }
    //     if(length>maxLength){
    //         maxLength=length;
    //     }
    //     length=0;
    // }
    // if(length>maxLength){
    //         maxLength=length;
    // }
    // cout<<maxLength;
    
    // Method 2:-
    
    int i=0;
    int n=s.size();
    
    while(i<n){
        if(s[i]==' '){
            i++;
            continue;
        }
        int j=i;
        int cnt=0;
        
        while(j<n and s[j]!=' '){
            cnt++;
            j++;
        }
        if(cnt>maxLength){
            maxLength=cnt;
        }
        i=j;
    }
    cout<<maxLength;


}