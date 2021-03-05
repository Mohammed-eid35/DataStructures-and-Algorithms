//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

long long fastPower(long long x, long long p) {
    if (!p) return 1;
    long long ret = fastPower(x, p >> 1);
    ret *= ret;
    if (p & 1) ret *= x;
    return ret;
}

int fastPower(int x, int p, int MOD) {
    if (!p) return 1;
    int ret = fastPower(x, p >> 1, MOD);
    ret = (1ll * ret * ret) % MOD;
    if (p & 1) ret = (1ll * x * ret) % MOD;
    return ret;
}

int main() {

    cout << fastPower(2, 5) << '\n';
    cout << fastPower(2, 5, 20) << '\n';

return 0;
}
