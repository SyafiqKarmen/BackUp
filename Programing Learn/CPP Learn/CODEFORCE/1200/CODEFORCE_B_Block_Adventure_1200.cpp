#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase {0}, x {0};
    vector<int> array;

    cin >> testCase;

    while (testCase--)
    {
        int n {0}, m {0}, k {0};
        cin >> n >> m >> k;

        array.clear();

        for (int i {0}; i < n; ++i){
            cin >> x;
            array.push_back(x);
        }

        int i {1};

        while (true){
            if (n == 1){
                cout << "YES" << '\n';
                break;
            }

            int need = max(0, array[i] - k);                    

            if (array[i - 1] >= need) {                         
                m += array[i - 1] - need;                      
                ++i;
            }
            else if (m >= need - array[i - 1]) {               
                m -= need - array[i - 1];                      
                ++i;
            }
            else {
                cout << "NO" << '\n';
                break;
            }

            if (i == n){
                cout << "YES" << '\n';
                break;
            }
        }
    }
}