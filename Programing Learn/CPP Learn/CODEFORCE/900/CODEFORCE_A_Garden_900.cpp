#include <iostream>

int main () {
    int n {0}, k {0}, bucekt {0}, fastest {0};
    std::cin >> n >> k;
    for (int i {0}; i < n; ++i){
        std::cin >> bucekt;
        if (k % bucekt == 0) {
           if (bucekt > fastest){
            fastest = bucekt;
           }
        }
    }
    std::cout << k / fastest;
}