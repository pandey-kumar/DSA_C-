#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int vowelarr[s.size()];
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o'|| s[i]=='u'){
            vowelarr[i]=1;
        }else{
            vowelarr[i]=0;
        }
    }
    int psum[s.size()];
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=vowelarr[i];
        psum[i]=sum;
    }
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int L,R;
        cin>>L>>R;
        L--;R--;
        if(L==0){
            cout<<psum[R]<<endl;
        }else{
            cout<<psum[R]-psum[L-1]<<endl;
        }

    }
}