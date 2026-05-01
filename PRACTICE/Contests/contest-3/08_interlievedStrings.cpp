#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cin>>s>>t;
    int s1=s.size();
    int s2=t.size();
    int i=1;
    int j=0;
    string ans="";
    ans+=s[0];
    while(i<s1 and j<s2){
        ans+="-";
        ans+=t[j];
        j++;
        ans+="-";
        ans+=s[i];
        i++;
    }
    while(j<s2){
        ans+="-";
        ans+=t[j];
        j++;
    }
    while(i<s1){
        ans+="-";
        ans+=s[i];
        i++;
    }
    cout<<ans;

}


// Method 2 :-


/* 
Algorithm :-


Read input strings S and T
Initialize:
i = 0 (pointer for S)
j = 0 (pointer for T)
empty list/string result
While both strings have characters left:
Add S[i] to result
Add T[j] to result
Increment i and j
If any characters remain in S:
Append remaining characters of S to result
If any characters remain in T:
Append remaining characters of T to result
Print the result:
Output characters separated by - (no trailing dash)

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int i = 0, j = 0;
    vector<char> result;

    // Alternate characters
    while (i < S.size() && j < T.size()) {
        result.push_back(S[i++]);
        result.push_back(T[j++]);
    }

    // Remaining characters of S
    while (i < S.size()) {
        result.push_back(S[i++]);
    }

    // Remaining characters of T
    while (j < T.size()) {
        result.push_back(T[j++]);
    }

    // Print with dashes
    for (int k = 0; k < result.size(); k++) {
        if (k > 0) cout << "-";
        cout << result[k];
    }

    return 0;
}