#include <bits/stdc++.h>
using namespace std;

void insertionSort(int ar[], int sz) {
    int key, j;
    for (int i = 1; i < sz; ++i) {
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key) {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}

void printArray(int ar[], int sz) {
    for (int i = 0; i < sz; ++i) {
        cout << ar[i] << ' ';
    }
    cout << '\n';
}

void scanArray(int ar[], int sz) {
    for (int i = 0; i < sz; ++i) {
        cin >> ar[i];
    }
}

int main() {

    int sz; cin >> sz;
    int ar[sz];
    scanArray(ar, sz);
    insertionSort(ar, sz);
    printArray(ar, sz);

return 0;
}
