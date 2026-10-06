#include <iostream>
#include <string>

int main () {
    std::string necklace;
    int pearls {0}, links {0};
    std::cin >> necklace;
    for (int i {0}; i < necklace.size(); i++){
        if(necklace[i] == '-'){
            links++;
        } else if (necklace[i] == 'o'){
            pearls++;
        }
    }
    if (links == 0 || pearls == 0){
        std::cout << "YES";
    }
    else if (links % pearls == 0){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}

// Hati - Hati dengan edge case, dan hati hati dengan pembagian serta mod yang memiliki penyebut 0