// PROBLEM A

/*#include <iostream>

int main () {
    std::cout << "Hello World";
}*/

// PROBLEM B

/*#include <iostream>
#include <cmath>

bool cekPrima(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true; 
}

int main() {
    int angka;
    std::cin >> angka;
    if (cekPrima(angka)) {
        std::cout <<"YES\n";
    } else {
        std::cout <<"NO\n";
    }
    return 0;
}*/

// PROBLEM C

#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int K, L;
    if (!(std::cin >> K >> L)) return 0;

    bool first = true;
    for (int i = 0; i < K; ++i) {
        if (!first) {
            std::cout << " ";
        }
        std::cout << 2 * i;
        first = false;
    }

    for (int j = 0; j < L; ++j) {
        if (!first) {
            std::cout << " ";
        }
        std::cout << (2 * j + 1);
        first = false;
    }

    std::cout << "\n";

    return 0;
}
