#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int howManyChild {0}, x {0}, y {0};
    vector<int>groupOfChild;

    cin >> howManyChild;

    for (int i {0}; i < howManyChild; ++i) {
        int z {0};
        cin >> z;
        groupOfChild.push_back(z);
    }

    cin >> x >> y;

    for (int k {1}; k <= howManyChild; ++k) {
        
        int beginner {0};
        int intermediate {0};

        for (int i {0}; i < k - 1; ++i) {
            beginner += groupOfChild[i];
        }

        for (int i {k - 1}; i < howManyChild; ++i) {
            intermediate += groupOfChild[i];
        }

        if (beginner >= x && beginner <= y &&
            intermediate >= x && intermediate <= y) {
            cout << k << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';
}