#include <iostream>
#include <vector>

int main (){
    int rowAndColoumn {0}, inToOUt {0}, ganjilOrGenap {0}, counting {0};
    std::cin >> rowAndColoumn;
    std::vector<std::vector<int>> matrix(rowAndColoumn, std::vector<int>(rowAndColoumn));
    inToOUt = ((rowAndColoumn - 3)/2);
    (rowAndColoumn % 2 == 0) ? ganjilOrGenap = 1 : ganjilOrGenap = 2; 
    for (int i {0}; i < inToOUt + 2; i++){
        for (int i {0}; i  < ganjilOrGenap ; i++){
            if (){
                std::cout << "test;"
            }
            if (){
                std::cout << "test;"
            }
            if (){
                std::cout << "test;"
            }
            if (){
                std::cout << "test;"
            }
        }
        ganjilOrGenap += 2;
        counting++;  // masalah, karena index mulai dari 0 bukan 1 jadi itu out of bound
    }    
}