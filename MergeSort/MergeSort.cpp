#include <bits/stdc++.h>
using namespace std;

void merge(int ar[], int l, int mid, int r) {
    int sz1 = mid - l + 1;
    int sz2 = r - mid;

    int L[sz1], R[sz2];

    for (int i = 0; i < sz1; ++i)
        L[i] = ar[l + i];
    for (int i = 0; i < sz2; ++i)
        R[i] = ar[mid + i + 1];

    int i = 0, j = 0, k = l;
    while (i < sz1 && j < sz1) {
        if (L[i] <= R[j])
            ar[k++] = L[i++];
        else
            ar[k++] = R[j++];
    }

    while (i < sz1) { ar[k++] = L[i++]; }
    while (j < sz2) { ar[k++] = L[j++]; }
}

void mergeSort(int ar[], int l, int r) {
    if(l >= r) return;

    int mid = (l + r) / 2;
    mergeSort(ar, l, mid);
    mergeSort(ar, mid+1, r);
    merge(ar, l, mid, r);
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
    mergeSort(ar, 0, sz - 1);
    printArray(ar, sz);

return 0;
}
