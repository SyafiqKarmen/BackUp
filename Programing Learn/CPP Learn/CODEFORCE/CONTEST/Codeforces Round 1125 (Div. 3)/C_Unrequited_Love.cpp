#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<long long> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int m = N - 4;
    vector<long long> v(m);
    unordered_map<long long, long long> freq;

    for (int i = 0; i < m; ++i) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
        freq[v[i]]++;
    }

    long long ans = 0;
    for (auto const& [value, count] : freq) {
        ans += (count * (count - 1)) / 2;
    }

    for (int i = 0; i < m; ++i) {
        if (i + 2 < m && v[i] == v[i + 2]) {
            ans--;
        }
        if (i + 4 < m && v[i] == v[i + 4]) {
            ans--;
        }
    }

    cout << ans << "\n";
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase {0};
    if (cin >> testCase) {
        while (testCase--) {
            solve();
        }
    }
    return 0;
}
