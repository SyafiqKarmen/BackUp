#include <iostream>
#include <set>

int main (){
    std::set<char>userName;
    std::string userInput;
    std::cin >> userInput;
    for (char temp : userInput)
    {
        userName.insert(temp);
    }
    (userName.size() % 2 == 0) ? std::cout << "CHAT WITH HER!" : std::cout << "IGNORE HIM!"; 
}