#include <bits/stdc++.h>
using namespace std;

void selectionSort(int ar[], int sz) {
    int mni;
    for (int i = 0; i < sz-1; ++i) {
        mni = i;
        for (int j = i+1; j < sz; ++j) {
            if (ar[j] < ar[mni])
                mni = j;
        }
        swap(ar[i], ar[mni]);
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
    selectionSort(ar, sz);
    printArray(ar, sz);

return 0;
}
