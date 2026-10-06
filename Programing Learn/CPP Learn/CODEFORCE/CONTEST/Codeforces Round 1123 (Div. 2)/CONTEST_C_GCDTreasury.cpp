// NEED TO LEARN AGAIN

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int testCase;
    std::cin >> testCase;

    while (testCase--) {
        int panjang;
        long long pirateSteal;

        std::cin >> panjang >> pirateSteal;

        std::vector<long long> a(panjang);

        for (int j = 0; j < panjang; j++) {
            std::cin >> a[j];
        }

        long long answer = 0;
        long long x = pirateSteal;
        for (long long p = 2; p * p <= x; p++) {
            if (x % p == 0) {

                long long sum = 0;
                for (int j = 0; j < panjang; j++) {
                    if (a[j] % p == 0) {
                        sum += a[j];
                    }
                }

                if (sum > answer) {
                    answer = sum;
                }
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
        if (x > 1) {
            long long sum = 0;

            for (int j = 0; j < panjang; j++) {
                if (a[j] % x == 0) {
                    sum += a[j];
                }
            }

            if (sum > answer) {
                answer = sum;
            }
        }

        std::cout << answer << '\n';
    }

    return 0;
}