#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> pos(n + 1);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            pos[x] = i;
        }

        bool dp[2] = {true, false};

        for (int x = 1; x < n; x++) {
            bool ndp[2] = {false, false};

            for (int p = 0; p < 2; p++) {
                if (!dp[p]) continue;

                int r = ((x - 1) - p) & 1;

                if (pos[x] % 2 == (p ^ 1))
                    ndp[p ^ 1] = true;

                int parity = (n - r) & 1;

                if (pos[x] % 2 == parity)
                    ndp[p] = true;
            }

            dp[0] = ndp[0];
            dp[1] = ndp[1];
        }

        bool ok = false;

        for (int p = 0; p < 2; p++) {   
            if (!dp[p]) continue;

            if ((p ^ 1) == pos[n] % 2)
                ok = true;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}