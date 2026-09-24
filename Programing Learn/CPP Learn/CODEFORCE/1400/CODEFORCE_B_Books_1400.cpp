#include <iostream>

int  main (){
    int howMuchBook {0}, freeTime {0}, oRead {0}, iReading {0}, output {0};
    std::cin >> howMuchBook >> freeTime;
    for (int i {0}; i < howMuchBook; i ++){
        std::cin >> iReading;
        if (oRead + iReading <= freeTime) {
            oRead = oRead + iReading;
            output++;
        }
    }
    std::cout << output;


}