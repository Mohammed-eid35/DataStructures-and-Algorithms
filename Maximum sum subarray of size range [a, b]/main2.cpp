//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {  Mo35();

    int n, a, b;
    cin >> n >> a >> b;
    vector<long long> pre(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> pre[i];
        pre[i] += pre[i - 1];
    }
    long long mx = -2e18;
    multiset <long long> st;
    for (int i = a; i <= n; ++i) {
        int x = i - b;
        int y = i - a;
        if (y >= 0)
            st.insert(pre[y]);
        if (st.empty())
            mx = max(mx, pre[i]);
        else
            mx = max(mx, pre[i] - *st.begin()) ;
        if (x >= 0) {
            auto it = st.find(pre[x]) ;
            st.erase(it) ;
        }
    }
    cout << mx ;

return 0;
}
