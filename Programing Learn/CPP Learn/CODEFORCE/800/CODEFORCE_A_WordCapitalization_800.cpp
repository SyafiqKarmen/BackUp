#include <iostream>
#include <algorithm>
#include <cctype>

int main (){
    std::string userName;
    std::cin >> userName;
    std::transform(userName.begin(), userName.end() - (userName.size()-1), userName.begin(),[](char  c){return std::toupper(c);});
    std::cout << userName;
}