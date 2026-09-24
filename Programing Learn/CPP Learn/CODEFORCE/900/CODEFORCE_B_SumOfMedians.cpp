#include <iostream>
#include <vector>
 
int main() {
    int t;
    std::cin >> t;
 
    while (t--) {
        int n, k;
        std::cin >> n >> k;
 
        std::vector<long long> a(n * k);
 
        for (int i = 0; i < n * k; i++) {
            std::cin >> a[i];
        }
 
        int step = n / 2 + 1;
        int pos = n * k - 1 - n / 2;
 
        long long answer = 0;
 
        for (int i = 0; i < k; i++) {
            answer += a[pos];
            pos -= step;
        }
 
        std::cout << answer << '\n';
    }
 
    return 0;
}
