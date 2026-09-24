#include <iostream>
#include <cmath>

int main() {
    int foo {0}, howManyStop {0}, remainIn {0}, exitout {0}, highestNumber {0};
    
    std::cin >> howManyStop;
    
    
    std::cin >> exitout >> remainIn; 
    foo = remainIn - exitout; 
    highestNumber = foo;
    
    
    for (int i {1}; i < howManyStop; i++){
        std::cin >> exitout >> remainIn;
        
        foo -= exitout;  
        foo += remainIn; 
        
        if (foo > highestNumber) {
            highestNumber = foo;
        }
    }
    
    std::cout << highestNumber;
    return 0;
}
