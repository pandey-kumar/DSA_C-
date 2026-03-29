/* 

Q  queries 

[L1,R1] ,[L2,R2] ,[L3,R3] ,.... [Lq,Rq]

EveryTime we have to find sum in arr from L1 to R1

// Brute force Algorithm :-

1.loop till Q queries.  -------->  O(Q)
2.Take input of L and R .
3.Again loop from L to R and keep on adding to sum+=arr[i]---> O(n) Worst case if L=0 and R= n-1
4.print sum

Total T.c =  O(Q*n)   Space complexity :-  O(1) extra space

if constaint is 10^5  then  will give TLE because 10^5 * 10^5
==>  10^10   


-------L------------R---------



psum[R]===>  sum till 0 to R
psum[L-1]==> sum till 0 to L-1

if we will subtract both we can get sum till L to R

to find sum between L and R


// Optimised Appraoch Algorithm :-

1.make a psum array (psum)  O(n)
2.Loop till Q queries.      O(Q)
3.Take L and R   [Note if 1 based indexing make L-- and R--] 
4.Now :- if L==0  => sum=psum[R] else sum=psum[R]-psum[L-1]  O(1)
5.print sum



T.c ==  >  O(n+Q)  ==>  10^5 +10^5 ==> 2* 10^5 < 10^8

S.c ==> O(n) extra space

*/




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    // Lets make a psum Array
    long long psum[n]; 
    long long sum=0;  //  cumulative varaible to collect sum everytime
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psum[i]=sum;
    }
    int Q;
    cin>>Q;

    for(int i=0;i<Q;i++){
        int L,R;
        cin>>L>>R; // 1 based indexing hence L-- and R--
        L--;
        R--;
        if(L==0){
            cout<<psum[R]<<endl;
        }else{
            cout<<psum[R]-psum[L-1]<<endl;
        }
    }



}