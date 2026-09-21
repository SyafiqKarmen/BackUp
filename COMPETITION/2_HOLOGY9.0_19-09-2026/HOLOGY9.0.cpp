#include <bits/stdc++.h>
using namespace std;


    const long long MOD = 1000000007;

    int main (){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int testCase {0};
        cin >> testCase;

        vector<int> n(testCase);
        int mx = 0;

        for (int i = 0; i < testCase; i++){
            cin >> n[i];
            mx = max(mx, n[i]);
        }

        vector<long long> dp(mx + 1);

        dp[0] = 1;

        if (mx >= 1){
            dp[1] = 1;
        }
        if (mx >= 2){
            dp[2] = 2;
        }
        for (int i = 3; i <= mx; i++){
            dp[i] = (2 * dp[i - 1] + dp[i - 3]) % MOD;
        }
        for (int x : n){
            cout << dp[x] << '\n';
        }
    }
