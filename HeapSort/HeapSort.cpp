//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "rt", stdin);
}

void heapify(int ar[], int sz, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < sz && ar[l] > ar[largest]) { largest = l; }
    if (r < sz && ar[r] > ar[largest]) { largest = r; }

    if (largest != i) {
        swap(ar[i], ar[largest]);
        heapify(ar, sz, largest);
    }
}

void heapSort(int ar[], int sz) {
    for (int i = sz / 2 - 1; i >= 0; --i) {
        heapify(ar, sz, i);
    }
    for (int i = sz - 1; i > 0; --i) {
        int tmp = ar[0];
        ar[0] = ar[i];
        ar[i] = tmp;

        heapify(ar, i, 0);
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

int main() {  Mo35();

    int sz; cin >> sz;
    int ar[sz];
    scanArray(ar, sz);
    heapSort(ar, sz);
    printArray(ar, sz);

return 0;
}
