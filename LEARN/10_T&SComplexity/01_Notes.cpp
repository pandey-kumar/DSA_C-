/* 

1sec -> 10^8   iterations can be done

2 sec -> 2* 10^8


10sec -> 10^9  iterations


if you have number of iteration then divide by 10^8 to get the time in seconds it will take










Factors  of a number 

12 -> 1, 2, 3, 4, 6, 12  ==> 6 factors


// Lets count the factors

int count =0;
for(int i=1;i<=n;i++){
    if(n%i==0) count++;
}

if n= 12  ->  12 iterations

n = 10^8   -> 10 ^8 iterations --> 1 sec
n=  10^9   -> 10 ^9 iterations --> 10 sec
.
.

.
suppose n=10^18 --->       10^18/ 10^8 = 10^10 sec => 300+ years


// We should optimise this 


// observation 

12 = 1,2,3,4,6,12


1 x 12 = 12 
2 x 6 = 12           PHASE - 1
3 x 4= 12
-------------- Repeatations ------------

4 X 3= 12
6 X 2= 12           PHASE - 2
12 X 1 = 12


each case we can do count +=2 for phase 1
// Lets try to generalise them :-

i X  N/i = N

condition you can see :-

1. Phase 1 =>   i < N/i
2. Phase 2 =>   i> N/i


Our work will be finished in phase 1 only till condition i< N/i


so   i < N/i
    i^2 < N
    i < Root N

//  we are mising edge case for perfect Squares like 36

1 x 36= 36     cnt +=2
2 X 18 = 36    cnt +=2
3 X 12 = 36    cnt+=2
6 X 6 = 36     cnt+=1  (special case)  (repeatation)

------------------Partition -----------

12 X 3 = 36
18 X 2 = 36
36 X 1 = 36

there fore  we can say  i<= N/i

Hence Final condition would be    i<=N/i

i^2 <= N

[ i <= Root N  ]


// Pseudo code  :-

count =0;

for(i=1 ,i<=root N,i++){
    if( N % i==0){
        if (N/i == i ) cnt++;
        else cnt+=2
    }
}
    
print (cnt)



// Now analyse complexity which was taking 300 + years

if n= 10^8  --> root N --> 10^4 --> less than 1 sec

n= 10^16  ---> root N --> 10^8 ---> 1 sec

n=10^18 ---> rrot N  ---> 10^9 ---> 10 sec only insted of 300+ years

BOOM  this is the power of optimisation of time complexity


*/

