/* 

PREFIX SUM

*/

#include <iostream>
#include <vector>

int main () {
    std::vector<int> array {1,2,5,7,8,11,4,22,5};
    for (int x : array){
        std::cout << x << " ";
    }
    std::cout << '\n';
    for (int i {1}; i < array.size(); i++){
        array[i] = array[i] + array [i-1];
    }
    for (int x : array){
        std::cout << x << " ";
    }
}

/*

Bisa menggunakan std::partial_sum hasilnya sama dan kecepatanya sama O(N)
perlu #include <numeric>
std::partial_sum

*/