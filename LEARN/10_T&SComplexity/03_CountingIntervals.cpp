/* 
T=1 (L,R) --> R - L - 1
T=2 [L,R) --> R -L
T=3 (L,R] --> R - L
T=4 [L,R] --> R-L + 1


edge case if  R==L  then    R-L-1  will give negative in that case


*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        long long T,L,R;
        cin>>T>>L>>R;
        if(L>R){
            cout<<0<<endl;
        }
        else if(L==R){
            if(T>=1 and T<=3){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
        }
        else{
            if(T==1){
                cout<<R-L-1<<endl;
            }else if(T==2 || T==3){
                cout<<R-L<<endl;
            }else{
                cout<<R-L+1<<endl;
            }
        }
    }
}
