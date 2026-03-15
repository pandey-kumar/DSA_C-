/* 

Algorithm :-

MyMethod:-

1. make a counter=1;
2.loop inside the array till last second element
3. if arr[i]==arr[i+1] make count++;
   else print arr[i] and if count>1 print count as well and reset count=1;

4. in end print last element s[s.size()-1]
   and if(count>1) then print count also and then endl


Two pointer :- [Method 2]

1. make one pointer i=0; n=s.size()
2. use while loop till i<n :-
   another pointer j=i; counter=0;
   use another while(j<n and s[i]==s[j]){
        counter++;
        j++;
   }
    print s[i]
    if counter>1 print counter
    make i=j;





*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count=1;

    // 
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])count++;
        else{
           cout<<s[i];
           if(count>1)cout<<count;
           count=1; //reset
        }
    }
    cout<<s[s.size()-1];
    if(count>1)cout<<count;
    cout<<endl;


}


void solve2(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    while(i<n){
        int cnt=0;
        int j=i;
        while(j<n and s[i]==s[j]){
            cnt++;
            j++;
        }
        cout<<s[i];
        if(cnt>1)cout<<cnt;
        i=j;
    }
    cout<<endl;

}
int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        solve2();
    }

}