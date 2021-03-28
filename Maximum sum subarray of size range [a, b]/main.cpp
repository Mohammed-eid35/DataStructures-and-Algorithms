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
long long pre[N];

int main() {  Mo35();

    int n, a, b;
    cin >> n >> a >> b >> pre[0];
    for (int i = 1; i < n; ++i) {
        cin >> pre[i];
        pre[i] += pre[i - 1];
    }
    multiset<long long> st;
    st.insert(0);
    long long mx = pre[a - 1];
    bool flag = false;
    for (int i = a; i < n; i++) {
        if (i - b >= 0) {
            if (!flag) {
                auto it = st.find(0);
                st.erase(it);
                flag = true;
            }
        }
        if (i - a >= 0)
            st.insert(pre[i - a]);
        mx = max(mx, pre[i] - *st.begin());
        if (i - b >= 0) {
            auto it = st.find(pre[i - b]);
            st.erase(it);
        }
    }
    cout << mx << '\n';

return 0;
}
