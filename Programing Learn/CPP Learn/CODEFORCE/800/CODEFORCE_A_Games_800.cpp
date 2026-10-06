#include <iostream>
#include <vector>

int main() {
    int testCase{0}, valA{0}, valB{0}, answer{0};
    
    if (!(std::cin >> testCase) || testCase <= 0) return 0;

    std::vector<int> arraya;
    std::vector<int> arrayb;

  
    for (int i = 0; i < testCase; i++) {
        std::cin >> valA >> valB;
        arraya.push_back(valA);
        arrayb.push_back(valB);
    }

    for (int k = 0; k < testCase; k++) {
        for (int l = 0; l < testCase; l++) {
            if (arraya[k] == arrayb[l]) {
                answer++;
            }
        }
    }

    std::cout << answer << std::endl;
    return 0;
}
