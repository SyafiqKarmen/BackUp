
// Two Pointer Left

/* #include <iostream>
#include <vector>

int main () {
    std::vector<int>sortedArray = {-5,1,2,5,8,19,34,68,99,108};
    int left {0}, right {0}, target {76};
    right = sortedArray.size() - 1;
    while (sortedArray.at(left) + sortedArray.at(right) != target){
        if (sortedArray.at(left) + sortedArray.at(right) > target){
            right--;
        } else if (sortedArray.at(left) + sortedArray.at(right) < target){
            left++;
        }
    }
    std::cout << "left : " << sortedArray.at(left) << "  right : " << sortedArray.at(right) << " target : " << target << '\n';
}*/