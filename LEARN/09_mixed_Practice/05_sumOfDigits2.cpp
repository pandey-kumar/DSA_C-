/* 

int ---> 10^9
long long ---> 10^18


But in case of very big numbers we can't use ant data type

=> Algo 

1. we can take them as string
2. iterate over string and subtract - '0' from them
    to get the correct ascii values of that string.
*/





#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
    
}