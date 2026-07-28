#include <iostream>
#include <vector>

int main (){
    int valueInMatrix {0}, row {0}, coloum {0};
    std::vector<std::vector<int>>matrix(5,std::vector<int>(5)); // useless really
    for (int i {0}; i < 5; i++)
    {
        for (int j {0}; j < 5; j++)
        {
            std::cin >> valueInMatrix;
            matrix[i][j] = {valueInMatrix};
            if (valueInMatrix != 0){
                row = {i};
                coloum = {j};
            }
        }
    }
    std::cout << abs(2 - row) + abs(2 - coloum);
}