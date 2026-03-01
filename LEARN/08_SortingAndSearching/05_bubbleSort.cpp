
/* 

Method 1 :- general :-

1. try to take consecutive two elements and swap them in ascending order.
2. cotinue doing this till the end.
3. in one pass at last elment will be sorted
4. again repeat the same thing for n-1 elemets untill arary gets sorted
5. keep a is swapped count as well if not swapped then break loop as everyone is sorted.


// Method 2:- 

eg:- [1,4,2,5,8]


// pass 1
=> [1,4,2,5,8]=> [1,2,4,5,8]  => [1,2,4,5,8] =>[1,2,4,5,8]  => 8 is at correct place and sorted


// ALgorithm 

1. we can also start from back to till 2nd element
2. again iterate from starting to last second element and keep swapping
3. maintain check if not swapped then break as already sorted


*/








#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort2(int arr[],int n){
int pass=1;
for(int i=n-1;i>=1;i--){
    bool isSwapped=false;
    int swapCount=0;
    for(int j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapCount++;
            isSwapped=true;
        }
    }
    // lets print pattern
    // if(swapCount=0) return;
      cout<<"Pass "<<pass++<<": ";
      for(int k=0;k<n;k++){
          cout<<arr[k]<<" ";
      }
      cout<<", swaps = "<<swapCount<<endl;
    if(!isSwapped)break;
   }

}
void bubbleSort(int arr[],int n){

   for(int i=0;i<n-1;i++){
    bool isSwapped=false;
    int swapCount=0;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapCount++;
            isSwapped=true;
        }
    }
    // lets print pattern
    // if(swapCount=0) return;
      cout<<"Pass "<<i+1<<": ";
      for(int k=0;k<n;k++){
          cout<<arr[k]<<" ";
      }
      cout<<", swaps = "<<swapCount<<endl;
    if(!isSwapped)break;
   }

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    bubbleSort(arr,n);
    // bubbleSort2(arr,n);
}