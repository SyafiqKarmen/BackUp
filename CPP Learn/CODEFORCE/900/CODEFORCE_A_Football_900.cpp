#include <iostream>

int main () {
    int playerChain {0};
    std::string numberPlayer;
    std::cin >> numberPlayer;
    char temp = numberPlayer.at(0);
    for (int i {0}; i < numberPlayer.size(); i++){
        if (numberPlayer.at(i) == temp){
            playerChain++;
            if (playerChain > 6){
                std::cout << "YES";
                break;
            }
        } else if (numberPlayer.at(i) != temp){
            playerChain = 1;
        }
        temp = numberPlayer.at(i);
    }
    if (playerChain < 7){
        std::cout << "NO";
    }
}