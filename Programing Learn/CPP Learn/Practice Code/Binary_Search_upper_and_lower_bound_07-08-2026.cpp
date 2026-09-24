/*

Binary Search Upper bound

*/

/*
#include <iostream>
#include <vector>

int main (){
    std::vector<int> array {1,3,4,4,6,7,8,8,8,8,9,9,10};
    int mid {0}, left {0}, right {0}, input {0};
    right = array.size();
    std::cin >> input;

    while(left < right) {
        mid = left + (right - left) / 2;
        if (array[mid] <= input){
            left = mid + 1;
        } else 
        {
            right = mid;
        }
    }
    std::cout << left;
}
*/

/*

Binary Search lower bound

*/

#include <iostream>
#include <vector>

int main (){
    std::vector<int> array {1,3,4,4,6,7,8,8,8,8,9,9,10};
    int mid {0}, left {0}, right {0}, input {0};
    right = array.size();
    std::cin >> input;

    while(left < right) {
        mid = left + (right - left) / 2;
        if (array[mid] < input){
            left = mid + 1;
        } else 
        {
            right = mid;
        }
    }
    std::cout << left;
}