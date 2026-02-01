/* 





*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long findHcf(long long a, long long b){
    if(a%b==0){
        return b;
    }
    if(b%a==0){
        return a;
    }

        long long ans=1;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 and b%i==0){
                ans=i;
            }
        }
        return ans;
    
}
int main() {
    long long a,b;
    cin>>a>>b;
    long long ans=findHcf(a,b);
    cout<<ans;

}