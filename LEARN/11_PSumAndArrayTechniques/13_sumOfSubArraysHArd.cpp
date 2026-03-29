/* 
tc:-O(n)
sc:- O(1)

// Algorithm:-

1. count the number of repeatations by every number in subset
2. multiply them with the number and add all to get the final sum


[1,4,2,3]
n=4

// we have to generalise how many times the number is coming

1      1     1 - appeared   4 times       n times
14     5    4 - appeared   6 times        
142    7     2 - appeared   6 times
1423   10    3- appeared    4 times       n times

4      4      Total :-   4*1+6*4+6*2+ 4*3= 4+24+12+12=52
42     6
423    9

2       2
23      5

3       3


total := 52



// we have to generalise the occurings of the numbers
         + + + +
arr  =  [1,5,3,4,5,7,2,9]
               + + + + +

n= 8


let analyse how many times 4 will occur
for that we should calculate the possible starting and ending points
possible:-

Total starting points possible for 4 :- SP = 4 
Total Ending points possible for 4 :- EP = 5

Total possible values for 4 =  4 x 5 = 20 times 4 will occur

Lets Generalise this:-

total n terms and n= 8
suppose Ai is our 4
         +  +  +  .... +
array = [A0 A1 A2 ... Ai Ai+1  ...... An-1]
                       +   +   . . . . +


Starting points possible (SP)=  i-0+1 = (i+1) times
Ending Points possibel   (EP)=  n-1-i+1 = (n-i) times


Total occurence of Ai is possible =  (i+1) x (n-i) times


means total sum of all Ai 's will be =  Ai X (i+1) x( n-i)

This is a general formule for it 






*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    long long fsum=0;

    for(int i=0;i<n;i++){
        fsum+= (arr[i] * (n-i) * (i+1));
    }

    cout<<fsum<<endl;
    
}