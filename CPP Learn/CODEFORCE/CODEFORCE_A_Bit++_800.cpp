#include <iostream>
#include <string>
#include <vector>
int main(){
    int variableX {0};
    std::string userInput {};
    int numberOFStatement {};
    std::cin >> numberOFStatement;
    std::vector<std::string>bitSyntax {};
    for(int pengulangan {0} ; pengulangan < numberOFStatement ; pengulangan++){
        std::cin >> userInput;
        bitSyntax.push_back(userInput);
    }
    for(int pengulangan {0} ; pengulangan < numberOFStatement ; pengulangan++){
        if (bitSyntax[pengulangan] == "++X" || bitSyntax[pengulangan] == "X++")
        {
            variableX++;
        } else if (bitSyntax[pengulangan] == "--X" || bitSyntax[pengulangan] == "X--"){
            variableX--;
        }
    }
    std::cout << variableX;
}