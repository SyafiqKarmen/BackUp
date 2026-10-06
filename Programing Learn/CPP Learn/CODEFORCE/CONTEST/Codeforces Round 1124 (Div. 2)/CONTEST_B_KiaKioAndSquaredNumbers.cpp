#include <iostream>
#include <map>
#include <utility>

using namespace std;

int nextNumber(int x) {
    int sum = 0;

    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }

    return sum;
}

pair<int, int> getState(int x) {
    int steps = 0;

    while (x != 1 && x != 4) {
        x = nextNumber(x);
        steps++;
    }

    if (x == 1) {
        return {0, 0};
    }

    return {1, steps % 8};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<pair<int, int>, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            freq[getState(x)]++;
        }

        long long ans = 0;

        for (auto [state, count] : freq) {
            ans += 1LL * count * (count - 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}