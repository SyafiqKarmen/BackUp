#include <iostream>
#include <algorithm>
#include <cctype>

int main (){
    std::string word;
    int uppercaseLetter {0}, lowercaseLetter {0};
    std::cin >> word;
    for (int i {0}; i < word.size(); i++){
        if (word.at(i) > 'Z'){
            lowercaseLetter++;
        }else if (word.at(i) <= 'Z'){
            uppercaseLetter++;
        }
    }
    if (lowercaseLetter > uppercaseLetter){
        std::transform(word.begin(), word.end(), word.begin(), [](char c){return std::tolower(c);});
        std:: cout << word;
    } else if (lowercaseLetter < uppercaseLetter){
        std::transform(word.begin(), word.end(), word.begin(), [](char c){return std::toupper(c);});
        std:: cout << word;
    } else if (lowercaseLetter == uppercaseLetter){
        std::transform(word.begin(), word.end(), word.begin(), [](char c){return std::tolower(c);});
        std:: cout << word;
    }
}