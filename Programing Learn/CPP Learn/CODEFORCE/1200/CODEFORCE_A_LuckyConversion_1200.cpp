// #include <iostream>
// #include <string>

// int main () {
//     std::string stringA, stringB;
//     std::cin >> stringA >> stringB;
//     char a1 {0}, a2 {0}, b1 {0}, b2 {0};
//     int operasi {0};

//     for (int i {1}; i < stringA.size(); ++i){
//         a1 = stringA[i - 1];
//         a2 = stringA[i];
//         b1 = stringB[i - 1];
//         b2 = stringB[i];

//         //std::cout << a1 << a2 << b1 << b2 << '\n';

//         if (a1 - b2 == 0 && b1 - a2 == 0 && a1 != b1){ // <---
//             operasi++;
//             std::swap(stringA[i - 1], stringA[i]); // <---
//             //std::cout << operasi << " <----- swap" << '\n';

//         } else if (a1 - a2 == 0 && b1 - b2 == 0 && a1 + a2 != b1 + b2){
//             operasi += 2;
//             stringA[i - 1] = stringB[i - 1];
//             stringA[i] = stringB[i];
//             //std::cout << operasi << " <----- replace all" << '\n';

//         } else if (a1 + a2 != b1 + b2){
//             if (a1 != b1){
//                 stringA[i - 1] = stringB[i - 1];
//                 operasi++;
//                 //std::cout << operasi << " <----- replace 1 "
//                 //          << stringA << " " << stringB << " "
//                 //          << a1 << " " << b1 << '\n';

//             } else if (a2 != b2){
//                 stringA[i] = stringB[i];
//                 operasi++;
//                 //std::cout << operasi << " <----- replace 2 "
//                 //          << stringA << " " << stringB << " "
//                 //          << a1 << " " << b1 << '\n';
//             }
//         }
//     }

//     std::cout << operasi;
// }

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a, b;
    std::cin >> a >> b;

    int fourToSeven = 0;
    int sevenToFour = 0;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '4' && b[i] == '7') {
            fourToSeven++;
        }
        else if (a[i] == '7' && b[i] == '4') {
            sevenToFour++;
        }
    }

    int swaps = std::min(fourToSeven, sevenToFour);
    int replacements = std::abs(fourToSeven - sevenToFour);

    std::cout << swaps + replacements;
}