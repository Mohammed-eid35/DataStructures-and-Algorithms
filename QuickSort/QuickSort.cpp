#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int low, int high){
    int pivot = ar[high];
    int i = low - 1;
    for (int j = low; j < high; ++j){
        if (ar[j] < pivot){
            i++;
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
        }
    }
    int tmp = ar[i + 1];
    ar[i + 1] = ar[high];
    ar[high] = tmp;

    return (i + 1);
}

void quicksort(int ar[], int low, int high){
    if (low < high){
        int pi = partition(ar, low, high);
        quicksort(ar, low, pi-1);
        quicksort(ar, pi+1, high);
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
    quicksort(ar, 0, sz-1);
    printArray(ar, sz);

return 0;
}
