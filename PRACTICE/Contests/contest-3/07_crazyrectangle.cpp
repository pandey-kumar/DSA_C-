/* 

// Algorithm in english 

>   Initialize num = 1, ch = 'a', isNumber = true
>   Traverse the grid row-wise (n × m)
>   If isNumber → print number and update (1–9 cyclic)
>   Else → print character and update (a–z cyclic)
>   Toggle isNumber after every cell


// Hinglish :-

> num = 1, ch = 'a', isNumber = true se start karo
> Grid ko row-wise (n × m) traverse karo
> Agar isNumber hai → number print karo aur 1–9 cycle me update karo
> Warna → character print karo aur a–z cycle me update karo
> Har cell ke baad isNumber toggle karo





*/



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int num = 1;
    char c = 'a';
    bool isNumber=true; // first row alwasy starts with number

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(isNumber){
                if(num>9) num=1;
                cout<<num;
                num++;
            }else{
                if(c>'z') c='a';
                cout<<c;
                c++;
            }
            isNumber=!isNumber; // if false make true and if true make false
        }
        cout<<endl;
    }




}