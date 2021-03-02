#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int ar[], int sz) {
    for (int i = 0; i < sz-1; ++i) {
        for (int j = 0; j < sz-i-1; ++j) {
            if (ar[j] > ar[j+1])
                swap(ar[j], ar[j+1]);
        }
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
    bubbleSort(ar, sz);
    printArray(ar, sz);

return 0;
}
