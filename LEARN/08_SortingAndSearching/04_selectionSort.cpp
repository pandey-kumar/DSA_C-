/* 
SELECTION SORT :-

algorithm:-

1. Select the minm in unsorted reigon
2.Bring it to the front by swapping it to the
  first element of the unsorted reigon
3.continue the same process till array becomes sorted

eg:-

arr= [23 , 2 , 4 , 46 , 18 , 5]

n=6
// steps -

Round 1:- minm elemnt = 2 (swap from 23)

> arr= [2,23,4,46,18,5] (now 2 is at correct place)

Round 2:- minm elemnt = 4 (swap from 23)

> arr =[2,4,23,46,18,5] (now 2 and 5 both are at right place)

Round 3:-minm elment = 5 (Swap from 23)

> arr=[2,4,5,46,18,23] (now 2,4,5) are at coorrect place

Round 4:- minm elemnt= 18 (swap from 46)

> arr=[2,4,5,18,46,23]

similarly 
> arr=[2,4,5,18,23,46]


// finally this is sorted


// Pseudo code :-

for(i=0;i<n;i++){

//find min in unsorted reigon [i,n-1] or  [i,n)
    int min=arr[i];
    int minIdx=i;

    for(j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            minIdx=j;
        }
    }
    
    // we need to swap ith element with minm:-
    swap(arr[i],arr[minIdx])
}





*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printTrace(int arr[],int n,int pass,int min){
    if(pass>n-1) return;
    cout<<"Pass "<<pass<<": ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<", min_selected = "<<min<<endl;
}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    // selection sort trace


    for(int i=0;i<n;i++){
        int min=arr[i];
        int minIdx=i;

        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
        printTrace(arr,n,i+1,min);
    }   
}