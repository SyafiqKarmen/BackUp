#include <iostream>

int main (){
    int elephantFriendCoord {0}, langkah {0};
    std::cin >> elephantFriendCoord;
    while (elephantFriendCoord > 0){
    (elephantFriendCoord >= 5) ? elephantFriendCoord -= 5, langkah++: 
    (elephantFriendCoord >= 4) ? elephantFriendCoord -= 4, langkah++: 
    (elephantFriendCoord >= 3) ? elephantFriendCoord -= 3, langkah++: 
    (elephantFriendCoord >= 2) ? elephantFriendCoord -= 2, langkah++: 
    (elephantFriendCoord >= 1) ? elephantFriendCoord -= 1, langkah++: 0;}
    std::cout << langkah;
}