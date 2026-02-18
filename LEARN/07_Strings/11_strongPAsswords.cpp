#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    int length=s.size();
    int cUpper=0;
    int cLower=0;
    int cDigit=0;
    int cSchar=0;

    for(int i=0;i<length;i++){
        if(s[i]>='a' and s[i]<='z'){
            cLower++;
        }
        else if(s[i]>='A' and s[i]<='Z'){
            cUpper++;
        }
        else if(s[i]>='0' and s[i]<='9'){
            cDigit++;
        }
        else{
            cSchar++;
        }
    }

    if(length==10 and cLower>=1 and cUpper>=1 and cDigit>=1 and cSchar>=1){
        cout<<"Strong";
    }else{
        cout<<"Weak";
    }


}