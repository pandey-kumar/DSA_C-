/* 
We can make a function isPrime() that will return
a boolean value telling the number is prime or not

and we will loop from 1 to n and check for every number
by calling this function if that is prime then
print it out.

*/


// my method 1 :-


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// long long countFactors(int n){
//     long long Count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0) Count++;
//         if(Count>2) break;
//     }
//     return Count;
// }
// // print all the numbers 

// void solve(int n){
//     for(int i=2;i<=n;i++){
//         if(countFactors(i)<=2){
//             cout<<i<<" ";
//         }else{
//             continue;
//         }
//     }
// }



// int main() {
//     int n;
//     cin>>n;
//     solve(n);
// }


// method 2:-


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    return count==2;
}

int main() {
    long long int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}