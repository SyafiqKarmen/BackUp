#include <iostream>
#include <iomanip>

int main (){
    double howManyTime {0}, calculation {0}, temp {0};
    std::cin >> howManyTime;

    for (int i {0}; i < howManyTime; i++){
        std::cin >> temp;
        calculation += temp;
    }
    std::cout << std::fixed << std::setprecision(12) << calculation/howManyTime;
}