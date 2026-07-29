#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    long long oddCount = (n + 1) / 2;
    
    if (k <= oddCount) {
        cout << (k * 2) - 1 << endl;
    } else {
        cout << (k - oddCount) * 2 << endl;
    }
    
    return 0;
}