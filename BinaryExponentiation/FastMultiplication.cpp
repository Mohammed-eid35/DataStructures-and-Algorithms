//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

long long fastMul(long long x, long long p, long long MOD) {
    if (!p) return 0;
    long long ret = fastMul(x, p >> 1, MOD);
    ret = (ret + ret) % MOD;
    if (p & 1) ret = (x + ret) % MOD;
    return ret;
}

int main() {

    cout << fastMul(2, 5, 11) << '\n';

return 0;
}
