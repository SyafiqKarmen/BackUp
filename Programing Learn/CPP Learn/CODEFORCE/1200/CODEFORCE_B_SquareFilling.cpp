#include <iostream>
#include <vector>

int main () {
    int rows {0}, coloum {0}, muchOperation {0}, invalid {0};
    std::cin >> rows >> coloum;
    std::vector<std::vector<int>> matrixA(rows , std::vector<int>(coloum , 0));
    std::vector<int> whatIndex;

    for (int i {0}; i < rows; i++){
        for (int j {0}; j < coloum; j++){
            std::cin >> matrixA[i][j];
        }
    }

    for (int i {0}; i < rows - 1; i++){
        for (int j {0}; j < coloum - 1; j++){
            int ij = matrixA[i][j];
            int i1j1 = matrixA[i+1][j+1];
            int i1j = matrixA[i+1][j];
            int ij1 = matrixA[i][j+1];

            if (ij + i1j1 + i1j + ij1 == 4){
                muchOperation++;
                whatIndex.push_back(i);
                whatIndex.push_back(j);
            } else if (ij + i1j1 + i1j + ij1 > 0 && ij + i1j1 + i1j + ij1 < 4){
                invalid++;
            }
        }
    }   
    if (muchOperation == 0) {
        std::cout << 0;
    } else if (muchOperation > 0){
        std::cout << muchOperation << '\n';
        for (int i {0}; i < whatIndex.size(); i++){
            std::cout << whatIndex[i];
        }
    }
}
1 1 1
1 1 1
0 1 1
1 1 1
1 1 1