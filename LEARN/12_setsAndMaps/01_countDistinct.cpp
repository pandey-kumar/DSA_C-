/* 
 arr= [1 2 2 2 3 2 4 4 4]

 // count distinct 

 // brute force :-  O(n2)

//  take first element and check all the other elements after it if they appeared more than once leave them and also make them -1

// if not then print that number its unique


// pseudo code
for (i=0 ---> n){      
    if(arr[i]==INT_MAX) continue
    for(j=i+1 ---> n){
        if(arr[j]==arr[i]){
            arr[j]=INT_MAX;
        }
    }
    print arr[i];
}



    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    long long finalcnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==INT_MAX) continue;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                arr[j]=INT_MAX;
            }
        }
        finalcnt++;
    }
    cout<<finalcnt;
    
// Method 2:-

// better time complexity we can use sets or map

// it does any operation in O(1) time complexity and space is generally O(n)

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    unordered_set<long long>st;
    for(int i=0 ;i<n;i++){
        st.insert(arr[i]);
    }
    cout<<st.size();


}