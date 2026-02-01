#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;

    // pattern 1:-
    
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // pattern 2:-

    // for(int i=1;i<=m;i++){
    //     int l=1;
    //     for(int j=1;j<=n;j++){
    //         cout<<l;
    //         l++;
    //     }
    //     cout<<endl;
    // }

    // pattern 3:-

    // int l=1;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<l;
    //     }
    //     l++;
    //     cout<<endl;
    // }
    
    //pattern 4 :-
    

    // for(int i=1;i<=m;i++){
    //     char l='A';
    //     for(int j=1;j<=n;j++){
    //         cout<<l;
    //         l++;
    //     }
    //     cout<<endl;
    // }


    //pattern 5 :-
    

    char l='A';
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<l;
        }
        l++;
        cout<<endl;
    }
}