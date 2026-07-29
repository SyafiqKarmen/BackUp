#include <iostream>

int main () {
    int chrCastInt {0}, i {0};
    std::string number;
    std::cin >> number;
    (number.at(0) == '9') ? i++ : 0 ;
    for (i ; i < number.size(); i++){
        if (number.at(i) > '4'){
            chrCastInt = 9 - (number.at(i) - '0');
            number.at(i) = chrCastInt + '0';
        }
    }
    std::cout << number;
}