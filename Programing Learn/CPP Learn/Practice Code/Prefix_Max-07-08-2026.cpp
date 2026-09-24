/*

Prefix Max

*/

#include <iostream>
#include <vector>

int main (){
    std::vector<int> array {1,3,5,1,6,5,7,4};
    for (const int &x : array){
        std::cout << x << " ";
    }
    std::cout << '\n';
    for (int i {1}; i < array.size(); ++i){
        if (array.at(i) < array.at(i-1)){
            array.at(i) = array.at(i-1); 
        }
    }
    for (const int &x : array){
        std::cout << x << " ";
    }
}

/*

Dari pada pakai if bisa pakai std::max dalam #include <algorithm> 
tapi tidak secepat if statement namun lebih gampang dibaca

*/
/*
#include <iostream>
#include <vector>
#include <algorithm>

int main (){
    std::vector<int> array {1,3,5,1,6,5,7,4};
    for (const int &x : array){
        std::cout << x << " ";
    }
    std::cout << '\n';
    for (int i {1}; i < array.size(); ++i){
        array[i] = std::max(array[i], array[i-1]);
    }
    for (const int &x : array){
        std::cout << x << " ";
    }
}
*/