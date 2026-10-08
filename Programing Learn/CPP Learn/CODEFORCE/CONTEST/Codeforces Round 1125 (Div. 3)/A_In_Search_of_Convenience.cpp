#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x0, y0, R;
    cin >> x0 >> y0 >> R;
    
    int x = x0 + R;
    int y = y0;
    
    cout << x << " " << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
