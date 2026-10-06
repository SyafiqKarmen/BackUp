#include <iostream>

int main() {
    int testCase;
    std::cin >> testCase;

    while (testCase--) {
        int n, k;
        std::cin >> n >> k;

        int power = 1;

        for (int i = 0; i < n - k + 1; i++) {
            power *= 2;
        }

        int answer = power + 2 * (k - 1);

        std::cout << answer << '\n';
    }
}