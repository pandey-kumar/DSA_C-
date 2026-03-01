/* 

Insertion Sort :-


In insertion sort 

Steps:-

Start from the second element (because the first element is already “sorted”).

Pick the current element.

Compare it with the elements before it.

Move (shift) all bigger elements one step to the right.

Place the picked element in its correct position.

Repeat until the whole array is sorted.

[2,5,3,9,7]



start iterating from 1st index till end
 int temp=arr[i];  // put in temproary variable

start internal loop  j=i-1  (from just before i)



for(int i=1;i<n;i++){
    int temp=arr[i];
    j=i-1;
    while(j>=0 and arr[j]>temp){
        arr[j+1]=arr[j]
        j--;
    }
    arr[j+1]=temp;
}





*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPattern(int arr[],int n,int count){
    for(int i=0;i<n;i++){
        if(i==count){
            cout<<"| ";
        }
        cout<<arr[i]<<" ";

    }
    if(count==n) cout<<"| ";
    cout<<", ";
}
void printArray(int arr[],int n,int pass,int shift,int count){
    cout<<"Pass "<<pass<<": ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<", ";
    printPattern(arr,n,count);
    cout<<"shifts = "<<shift;
    cout<<endl;
}

void insertionSort(int arr[],int n){
    int count=2;
    for(int i=1;i<n;i++){
        int shift=0;
        int temp=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>temp){
            //shift them 
            shift++;
            arr[j+1]=arr[j];
            j--;
        }

      arr[j+1]=temp;
    printArray(arr,n,i,shift,count++);

    }

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    insertionSort(arr,n);
}