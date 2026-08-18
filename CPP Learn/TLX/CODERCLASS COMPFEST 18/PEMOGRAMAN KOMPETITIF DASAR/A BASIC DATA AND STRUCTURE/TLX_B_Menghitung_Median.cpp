#include <iostream>
#include <set>
#include <algorithm>

int main() {
    int x {0};
    float y {0};
    std::cin >> x >> y;
    std::multiset<float> median;
    median.insert(y);
    std::cout << y << "\n";

    for (int i {1}; i <= x + 1; i++) {
        if (std::cin >> y);
        median.insert(y);
        
        std::sort(median.begin(), median.end());
        
        if (median.size() % 2 == 0) {

            int mid = median.size() / 2;
            float even = (median[mid - 1] + median[mid]) / 2;
            std::cout << even << "\n";

        } else {
            
            std::cout << median[median.size() / 2] << "\n";
        }
    }
    return 0;
}
