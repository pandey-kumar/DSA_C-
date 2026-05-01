#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(long long *arr,int num){
    long long total=0;
    long double avg=0;
    long long Max=arr[0];
    long long Min=arr[0];
    for(int i=0;i<num;i++){
        total+=arr[i];
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
    }
    avg=floor(total/num);
    cout<<total<<" "<<Max<<" "<<Min<<" "<<avg<<endl;
}
int main() {
    int num;
    cin>>num;
    long long arr[num];
    for(int i=0;i<num;i++)cin>>arr[i];
    solve(arr,num);
}