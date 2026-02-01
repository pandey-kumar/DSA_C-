#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;

    for (long long n = 1; n <= x; n++)
    {
        if (n % 3 == 0 and n %5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if (n % 3 == 0)
        {
            cout << "Fizz"<<endl;
        }
        else if (n % 5 == 0)
        {
            cout << "Buzz"<<endl;
        }else{
            cout<<n<<endl;
        }
    }
}