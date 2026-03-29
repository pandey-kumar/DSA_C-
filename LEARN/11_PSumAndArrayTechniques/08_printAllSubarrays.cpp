/* 

arr= [1,4,5,2,8]

print all sub arrays:-

n=5   (0 to 4)

[1,4,5,2,8]   
 L

sp=0th index  ep= from 0th to 4th index
sp=1st index  ep= from 1 to 4th index
.
.
.
sp=4th index and ep=on 4th index


// to print all sub arrays

three varaibles L,R and i 

[L,R]  to decide the interval everytime and i to iterate in that interval and print

three nested loops:-  one for L one for R and i for printing all


*/




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    //Lets print all the sub arrays:-
    for(int L=0;L<n;L++){
        for(int R=L;R<n;R++){
            // till here we will get [L,R]
            for(int i=L;i<=R;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

}