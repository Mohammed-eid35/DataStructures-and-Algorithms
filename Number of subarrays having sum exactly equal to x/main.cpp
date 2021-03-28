//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 2e5 + 5;
int ar[N];

int main() {  Mo35();

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> ar[i];
    map<long long, long long> sums;
    long long ans = 0, cur = 0;
    for (int i = 0; i < n; ++i) {
        cur += ar[i];
        if (cur == x)
            ans++;
        if (sums.find(cur - x) != sums.end())
            ans += sums[cur - x];
        sums[cur]++;
    }
    cout << ans;

return 0;
}
