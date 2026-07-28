#include <iostream>
#include <string>
#include <algorithm>
int main (){
    std::string firstWord {}, secondWord {};
    std::cin >> firstWord >> secondWord;
    std::transform(firstWord.begin(), firstWord.end(), firstWord.begin(),::toupper);
    std::transform(secondWord.begin(), secondWord.end(), secondWord.begin(),::toupper);
    (firstWord > secondWord) ? std::cout << "1" : (firstWord == secondWord) ? std::cout << "0" : std::cout << "-1";
}