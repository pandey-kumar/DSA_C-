#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkLowerCase(char c){
    if(c>='a' and c<='z') return true;
    else return false;
    
}
bool checkUpperCase(char c){
    if(c>='A' and c<='Z' ) return true;
    else return false;
}

bool checkDigit(char c){
    if(c>='0' and c<='9') return true;
    else return false;
}
void solve(string pass){
    bool isLower=false;
    bool isUpper=false;
    bool isDigit=false;
    bool isSpecialChar=false;
    for(int i=0;i<pass.size();i++){
        if(checkUpperCase(pass[i])) isUpper=true;
        else if(checkLowerCase(pass[i])) isLower=true;
        else if (checkDigit(pass[i])) isDigit=true;
        else isSpecialChar=true;
    }
    int strengthCount=0;
    if(isUpper) strengthCount++;
    if(isLower) strengthCount++;
    if(isDigit) strengthCount++;
    if(isSpecialChar) strengthCount++;
   
    if(strengthCount==4) cout<<"Strong";
    else if(strengthCount==3) cout<<"Moderate";
    else cout<<"Weak";

}
int main() {
    string pass;
    cin>>pass;
    solve(pass);
}