#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    unordered_map<long long ,long long>mp;
    for(int i=0;i<n;i++){
        int key,x;
        cin>>key;
        if(key!=3){
            cin>>x;
        }
        if(key==1){ // case 1 insert x into set
            if(mp.find(x)!=mp.end()){
                mp[x]++;
            }else{
                mp[x]=1;
            }
        }
        else if (key==2){ // case 2 single all occurence of x
            if(mp.find(x)!=mp.end()){
                mp[x]--;
                if(mp[x]==0) mp.erase(x);
            }
        }
        else if (key==3){ // case 3 print size
            cout<<mp.size()<<endl;
        }
        else if (key==4){
            if(mp.find(x)!=mp.end()){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
}