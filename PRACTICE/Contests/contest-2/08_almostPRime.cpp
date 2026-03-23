#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool countDivisors(int n){
    int count=0;
    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            if(n/i==i)count++;
            else count+=2;
        }
    }
    if(count<=4) return true;
    else return false;

}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        bool ans=countDivisors(i);
        if(ans)cout<<i<<" ";
    }
    
}