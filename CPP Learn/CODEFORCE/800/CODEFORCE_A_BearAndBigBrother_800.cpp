#include <iostream>

int main (){
    int limak {0}, bob {0}, result {0};
    std::cin >> limak >> bob;
    while (limak<=bob)
    {
        limak *= 3;
        bob *= 2;
        result++;
    }
    std::cout << result;
}