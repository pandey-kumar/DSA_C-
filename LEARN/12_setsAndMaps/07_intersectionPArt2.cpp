#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    map<long long, long long> mp1;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        mp1[val]++;
    }

    long long n2;
    cin >> n2;

    map<long long, long long> mp2;
    for (int i = 0; i < n2; i++) {
        int val;
        cin >> val;
        mp2[val]++;
    }

    map<long long, long long> mp3;

    // Intersection with frequency
    for (auto &pair : mp1) {
        long long key = pair.first;

        if (mp2.find(key) != mp2.end()) {
            mp3[key] = min(mp1[key], mp2[key]);
        }
    }

    // Calculate total size
    long long size = 0;
    for (auto &pair : mp3) {
        size += pair.second;
    }

    cout << size << endl;

    // Print elements
    for (auto &pair : mp3) {
        long long key = pair.first;
        long long freq = pair.second;

        while (freq--) {
            cout << key << " ";
        }
    }

    return 0;
}