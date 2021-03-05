//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

long long fastPower(long long x, long long p) {
    long long ret = 1;
    while (p) {
        if (p & 1) ret *= x;
        x *= x;
        p >>= 1;
    }
    return ret;
}

int fastPower(int x, int p, int MOD) {
    int ret = 1;
    while (p) {
        if (p & 1) ret = (1ll * ret * x) % MOD;
        x = (1ll * x * x) % MOD;
        p >>= 1;
    }
    return ret;
}

int main() {

    cout << fastPower(2, 5) << '\n';
    cout << fastPower(2, 5, 20) << '\n';

return 0;
}
