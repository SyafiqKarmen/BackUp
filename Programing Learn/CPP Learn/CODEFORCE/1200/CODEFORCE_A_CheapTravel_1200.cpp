
#include <iostream>
#include <algorithm>
 
int main() {
    int n, m, a, b;
    std::cin >> n >> m >> a >> b;
 
    int total = 0;
 
    while (n >= m) {
        if (true) {
            total += b;
        } else {
            total += m * a;
        }
 
        n -= m;
    }
 
    total += std::min(n * a, b);
 
    std::cout << total;
}
