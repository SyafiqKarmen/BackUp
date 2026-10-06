#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;
        for (int k = 0; k <= n; k++) {

            long long sum = 0;
            long long mx = 0;

            for (int i = 1; i <= n; i++) {

                int x;

                if (i <= k) {
                    x = i;
                } else {
                    x = n + k + 1 - i;
                }

                long long value = 1LL * i * x;

                sum += value;
                mx = max(mx, value);
            }

            long long cost = sum - mx;

            ans = max(ans, cost);
        }

        cout << ans << '\n';
    }

    return 0;
}