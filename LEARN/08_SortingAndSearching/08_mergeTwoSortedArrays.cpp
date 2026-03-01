#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long arr1[200005], arr2[200005];
    
    for(int i = 0; i < n; i++) 
        cin >> arr1[i];

    for(int i = 0; i < m; i++) 
        cin >> arr2[i];

    long long arr3[400005];

    int i = 0, j = 0, k = 0;

    // Merge
    while(i < n && j < m) {
        if(arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n)
        arr3[k++] = arr1[i++];

    while(j < m)
        arr3[k++] = arr2[j++];

    // Print merged array
    for(int x = 0; x < n + m; x++)
        cout << arr3[x] << " ";

    return 0;
}