#include <iostream>
#include <string>

int main() {
    std::string inputVashya;
    std::cin >> inputVashya;

    std::string target = "hello";
    int targetIndex = 0;

    
    for (int i = 0; i < inputVashya.size(); i++) {
        
        if (inputVashya.at(i) == target.at(targetIndex)) {
            targetIndex++;
        }
        
        
        if (targetIndex == 5) {
            break;
        }
    }

    
    if (targetIndex == 5) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
