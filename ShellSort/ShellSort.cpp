#include <bits/stdc++.h>
using namespace std;

void shellSort(int ar[], int sz) {
    int tmp, j;
    for (int gap = sz / 2; gap > 0; gap /= 2){
        for (int i = gap; i < sz; ++i){
            tmp = ar[i];
            for (j = i; j >= gap && ar[j - gap] > tmp; j -= gap) {
                ar[j] = ar[j - gap];
            }
            ar[j] = tmp;
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
    shellSort(ar, sz);
    printArray(ar, sz);

return 0;
}
