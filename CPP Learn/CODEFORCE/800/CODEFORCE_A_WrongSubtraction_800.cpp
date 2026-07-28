#include <iostream>

int main (){
    int n {0}, k {0};
    std::cin >> n >> k;
    for (int i {0}; i < k ; i++){
        (n % 10 != 0) ? n -= 1 : n /= 10;
    }
    std::cout << n;
}