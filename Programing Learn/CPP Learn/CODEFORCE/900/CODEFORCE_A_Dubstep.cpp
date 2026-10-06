#include <iostream> 
#include <string> 
 
int main () { 
    std::string dubstep; 
    std::cin >> dubstep; 
    int dubstepLength = {dubstep.size()}, notFirst {0}; 

    for (int i {2}; i < dubstepLength; ++i){ 
        if (dubstep[i - 2] == 'W' && 
            dubstep[i - 1] == 'U' && 
            dubstep[i] == 'B'){ 

            if (notFirst == 0) { 
                dubstep.replace(i - 2, 3, ""); 
                i = 1;                                      
                dubstepLength = dubstep.size(); 
            } 
            else {                                           
                dubstep.replace(i - 2, 3, " "); 
                i -= 2;                                      
                dubstepLength = dubstep.size(); 
            } 
             
        } 
        else {                                               
            notFirst = 1;                                    
        }    
    } 

    std::cout << dubstep; 
}