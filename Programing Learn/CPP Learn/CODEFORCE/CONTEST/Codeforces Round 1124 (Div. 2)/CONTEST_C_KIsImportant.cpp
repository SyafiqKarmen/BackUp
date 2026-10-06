#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        deque<long long> a(n);
        for (auto &x : a) cin >> x;

        long long ans = 0;

        while (a.size() >= k) {
            long long left = a[k - 1];
            long long right = a[a.size() - k];

            if (left >= right) {
                ans += left;
                a.erase(a.begin() + k - 1);
            } else {
                ans += right;
                a.erase(a.begin() + a.size() - k);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}