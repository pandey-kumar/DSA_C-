#include <iostream>
#include <algorithm>
using namespace std;

// Count shifts in Insertion Sort
long long insertionSort(int arr[], int n) {
    long long shifts = 0;

    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];  // shift right
            shifts++;
            j--;
        }

        arr[j + 1] = temp;
    }

    return shifts;
}

// Count swaps in optimized Selection Sort
long long selectionSort(int arr[], int n) {
    long long swaps = 0;

    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        if(minIdx != i) {
            swap(arr[i], arr[minIdx]);
            swaps++;
        }
    }

    return swaps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[5005];
        int arrCopy[5005];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arrCopy[i] = arr[i];  // copy original array
        }

        long long shifts = insertionSort(arr, n);
        long long swaps = selectionSort(arrCopy, n);

        if(shifts < swaps) {
            cout << "Insertion Sort\n";
        }
        else if(swaps < shifts) {
            cout << "Selection Sort\n";
        }
        else {
            cout << "Tie\n";
        }
    }

    return 0;
}