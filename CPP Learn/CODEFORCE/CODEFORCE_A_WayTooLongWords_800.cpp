#include <iostream>
#include <string>
#include <vector>
int main(){
    std::string kalimat{};
    int pengulanganInput {};
    std::cin >> pengulanganInput;
    std::vector<std::string> inputUser;
    for(int pengulangan {0} ; pengulangan < pengulanganInput ; pengulangan++){
        std::cin >> kalimat;
        inputUser.push_back(kalimat); 
    }
    for(int pengulangan {0} ; pengulangan < pengulanganInput ; pengulangan++){
        if (inputUser[pengulangan].length() < 11){
            std::cout << inputUser[pengulangan] << '\n';
        } else {
        std::cout << inputUser[pengulangan][0] << inputUser[pengulangan].length() - 2 << inputUser[pengulangan][inputUser[pengulangan].length() - 1] << '\n'; 
        }
    }
    
}