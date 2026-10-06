// 9 problem solve 6, most code is deleted and isnt saved 
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return;

    long long sum_a = 0;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        sum_a += val;
    }

    if ((n * k) % 2 == 0) {
        cout << "YES\n";
    } else {
        if (sum_a % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
