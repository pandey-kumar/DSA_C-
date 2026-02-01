#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    float a,b;
    cin>>a>>b;
    float ans=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(ans)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(ans)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(ans)<<endl;
}