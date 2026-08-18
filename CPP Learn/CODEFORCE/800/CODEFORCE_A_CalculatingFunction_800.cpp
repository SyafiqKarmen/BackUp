#include <iostream>
#include <cmath>

int main () {
    long long input {0}, calculation {0};
    std::cin >> input;
if (input % 2 == 0) {
    calculation = input / 2;
} else {
    calculation = -(input + 1) / 2;
}
    std::cout << calculation;
}