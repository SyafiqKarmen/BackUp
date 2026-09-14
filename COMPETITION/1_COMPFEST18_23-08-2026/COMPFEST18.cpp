/*
  
  Soal D. COMPFEST18 Tenggat Waktu
  
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main (){
    int tumpukan {0}, L {0}, R {0}, W {0}, waktu {0}, pointTotal {0};
    std::map<int,int>deadline; // Waktu Paling Awal , Deadline
    std::map<int,int>temporary; // Waktu Paling Awal , Waktu Paling Awal
    std::map<int,int>take; // Deadline, Waktu Paling Awal
    std::map<int,int>point; // Deadline , Point
    std::vector<int>highestNumber;
    std::cin >> tumpukan;

    for (int i {0}; i < tumpukan; i++)
    {
        std::cin >> L >> R >> W;
        temporary.insert({L , L});
        deadline.insert({L , R});
        point.insert({R , W});
        take.insert({R , L}); 
    }
    while (true){
        waktu++;
        
        if (waktu == temporary[waktu]){
            highestNumber.push_back(temporary[waktu]);
        }

        if (waktu == deadline[highestNumber[highestNumber.size() - 1]]){
            pointTotal += point[deadline[highestNumber[highestNumber.size() - 1]]];
            highestNumber.pop_back();
            std::cout << "test 9 " << highestNumber[highestNumber.size() - 1];
            int temp = highestNumber[highestNumber.size() - 1];
            while (deadline[temp] < waktu){ 
                if (highestNumber.size() <= 0){
                    break;
                }
                std::cout << "test 09905 " << highestNumber[highestNumber.size() - 1];
                highestNumber.pop_back();
            }
            std::cout << "test 00 " << highestNumber[highestNumber.size() - 1];
        }
        if (highestNumber.size() <= 0){
            break;
        }

    }
    std::cout << pointTotal;
}