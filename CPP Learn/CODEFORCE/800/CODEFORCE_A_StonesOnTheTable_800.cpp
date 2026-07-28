#include <iostream>

int main (){
    int howManyStone {0}, removeStone {0};
    std::string stoneColor;
    std::cin >> howManyStone;
    std::cin >> stoneColor;
    for (int i = 0; i < howManyStone - 1; i++)
    {
        if (stoneColor.at(i) == stoneColor.at(i+1))
        {
            removeStone++;
        }
        
    }
    std::cout << removeStone;
}