#include <iostream>

int main(){
    int k {0}, n {0}, w {0}, temp {0};
    std::cin >> k >> n >> w;
    for (int i {1}; i < w+1; i++){
        temp += k*i;
    }
    (temp < n) ? std::cout << 0 : std::cout << temp - n;
}