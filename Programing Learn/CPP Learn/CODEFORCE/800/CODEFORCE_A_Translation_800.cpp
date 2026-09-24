#include <iostream>
#include<string>
#include <algorithm>

int main (){
    std::string word, translate;
    getline(std::cin >> std::ws, word);
    getline(std::cin >> std::ws, translate);
    //std::cin >> word;
    std::reverse(word.begin(), word.end());
    (word == translate) ? std::cout << "YES" : std::cout << "NO";
}