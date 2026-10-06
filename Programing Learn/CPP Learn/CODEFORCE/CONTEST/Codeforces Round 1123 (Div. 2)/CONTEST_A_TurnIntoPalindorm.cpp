#include <iostream>
#include <vector>
#include <string>

int main (){
    int testCase {0}, howManyWord {0}, operasi {0};
    std::string willItPalindrome;
    char huruf;
    std::vector<int> palindorm;

    std::cin >> testCase;
    for (int i {0}; i < testCase; i++){
        std::cin >> howManyWord >> huruf >> willItPalindrome;
        for (int j {0}; j < howManyWord / 2; j++){
            if (willItPalindrome[j] != willItPalindrome[willItPalindrome.size() - 1 - j]){
                if (willItPalindrome[j] != huruf && willItPalindrome[willItPalindrome.size() - 1 - j] == huruf){
                    willItPalindrome[j] = huruf;
                    operasi++;
                } else if (willItPalindrome[willItPalindrome.size() - 1 - j] != huruf && willItPalindrome[j] == huruf)
                {
                    willItPalindrome[willItPalindrome.size() - 1 - j] = huruf;
                    operasi++;
                } else {
                    willItPalindrome[willItPalindrome.size() - 1 - j] = huruf;
                    willItPalindrome[j] = huruf;
                    operasi += 2;
                }  
            }
        }
    std::cout << operasi << '\n';
    operasi = 0;
    }
}