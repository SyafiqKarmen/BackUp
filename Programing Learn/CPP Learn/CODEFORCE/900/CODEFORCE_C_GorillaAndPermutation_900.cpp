#include <iostream>

int main () {
    int testCase {0}, n {0}, m {0}, k {0}, temp {0}, tempa {0};
    std::cin >> testCase;
    for (int i {0}; i < testCase; ++i){
        std::cin >> n >> m >> k;
        tempa = n;
        while (true){
            if (tempa > m){
                std::cout << tempa << " ";
                tempa--;
            } else {
                for (int k {1}; k <= m; ++k){
                    std::cout << k << " ";
                }
                std::cout << '\n';
                break;
            }
        }
    }
}