#include <iostream>

int main (){
    std::string number;
    std::cin >> number;
    int luckyNumber {0};
    for (int i {0}; i < number.size() ; i++){
        if(number.at(i) == '7' || number.at(i) == '4'){
            luckyNumber++;
        }
    }
    if (luckyNumber == 7 || luckyNumber == 4){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}