#include <iostream>

int main (){
    std::string whoWon;
    int Anton {0}, Danik {0}, gamePlayed {0};
    std::cin >> gamePlayed;
    std::cin >> whoWon;

    for (int i {0}; i < gamePlayed ; i++){
        if(whoWon.at(i) == 'D'){
            Danik++;
        } else if (whoWon.at(i) == 'A'){
            Anton++;
        }
    }
    if (Danik > Anton){
        std::cout << "Danik";
    } else if (Anton > Danik) {
        std::cout << "Anton";
    } else {
        std::cout << "Friendship";
    }
}