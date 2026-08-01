#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<std::string> matrix(n);

        for (int i = 0; i < n; i++) {
            std::cin >> matrix[i];
        }

        int flip = 0;

        for (int counting = 0; counting < n / 2; counting++) {

            int top = counting;
            int left = counting;
            int bottom = n - 1 - counting;
            int right = n - 1 - counting;

            for (int counter = 0; counter < right - left; counter++) {

                int a = matrix[top][left + counter] - '0';
                int b = matrix[top + counter][right] - '0';
                int c = matrix[bottom][right - counter] - '0';
                int d = matrix[bottom - counter][left] - '0';

                int ones = a + b + c + d;

                flip += std::min(ones, 4 - ones);
            }
        }

        std::cout << flip << '\n';
    }

    return 0;
}

// Conclusion
// Kode lama terlalu panjang dan overcomplicated, rule : jika kode sudah terlalu complicated sudah salah, stop dan sederhanakan seperti yang dibilang terry a davis stupid people admire complexcity genius admire simplicity
// -- sebelum selesaikan soal lakukan ini --
// 1. tulis apa yang diperlukan
// 2. pikirkan solusi untuk core problem
// 3. tulis hypotesis untuk solusi program
// 4. buat pseudo code dengan taruh di bagian mana taruh mana exmpale : dimana input from user, function, loop etc..
// -- sesudah menyelesaikan soal lakukan ini --
// buat kesimpulan untuk dimasa depan seperti ini
// tanggal 30/07/2026 logika untuk kode ini gampang tapi untuk sekarang implementasi masih buruk
// kode ini makan waktu banyak karena tidak melakukan hal diatas sekitar 7 jam
// kode dibawah adalah kenapa makan waktu 7 jam

/* #include <iostream>
#include <vector>

int main (){
    int temp {0}, rowAndColoumn {0}, inToOUt {0}, ganjilOrGenap {2}, counting {0}, counter {0}, flip {0};
    std::cin >> rowAndColoumn;
    std::vector<std::vector<int>> matrix(rowAndColoumn, std::vector<int>(rowAndColoumn));
    (rowAndColoumn % 2 == 0)? inToOUt = inToOUt / 2 + 1: inToOUt = ((rowAndColoumn - 3)/2);
    for (int i {0}; i < rowAndColoumn; i++){
        for (int j {0}; j < rowAndColoumn; j++){
            std::cin >> temp;
            matrix[i][j] = temp;
        }
    }

    for (int i {0}; i <= inToOUt; i++){
        for (int i {0}; i  < ganjilOrGenap ; i++){
            std::cout << matrix[inToOUt - counting][inToOUt - counting] << " == " << matrix[inToOUt - counting][inToOUt - counting + counter]  << '\n';

            std::cout << inToOUt - counting << "," << rowAndColoumn - inToOUt - 1 + counting << " == " << inToOUt - counting + counter << "," << rowAndColoumn - inToOUt - 1 + counting << '\n';

            std::cout << rowAndColoumn - inToOUt - 1 + counting << "," << rowAndColoumn - inToOUt - 1 + counting << " == " << rowAndColoumn - inToOUt - 1 + counting << "," << rowAndColoumn - inToOUt - 1 + counting - counter << '\n';

            std::cout << rowAndColoumn - inToOUt - 1 + counting << "," << inToOUt - counting <<" == " << rowAndColoumn - inToOUt - 1 + counting - counter << "," << inToOUt - counting << " END" << '\n';

            if (matrix[inToOUt - counting][inToOUt - counting] != matrix[inToOUt - counting][inToOUt - counting + counter]){
                flip++;
            }
            if (matrix[inToOUt - counting][rowAndColoumn - inToOUt - 1 + counting] != matrix[inToOUt - counting + counter][rowAndColoumn - inToOUt - 1 + counting]){
                flip++;
            }
            if (matrix[rowAndColoumn - inToOUt - 1 + counting][rowAndColoumn - inToOUt - 1 + counting] != matrix[rowAndColoumn - inToOUt - 1 + counting][rowAndColoumn - inToOUt - 1 + counting - counter]){
                flip++;
            }
            if (matrix[rowAndColoumn - inToOUt - 1 + counting][inToOUt - counting] != matrix[rowAndColoumn - inToOUt - 1 + counting - counter][inToOUt - counting]){
                flip++;
            }
            counter++;
        }
        ganjilOrGenap += 2;
        counting++;  // masalah, karena index mulai dari 0 bukan 1 jadi itu out of bound
        std::cout << ganjilOrGenap << " " << counting << '\n';
        counter = 0;
    }    
    std::cout << "end of the end " << flip;
}*/