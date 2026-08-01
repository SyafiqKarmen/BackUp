/* 
   pemahaman input output dari soal
   1. ingin berapa tes?
   2. berapa anak tangga dan berapa pertanyaan yang daijukan timur? (pertanyaanya adalah berapa anak tangga (total tinggi) yang bisa dinaiki)
   3. tinggi tangga dan sebanyak yang di input di 2.
   4. berapa pertanyaan dan sebanyak berapa yang di input di 2. (berapa pertanyaan disini itu tinggi kaki timur =? tangga)

   hypotesis : gunakan binary search untuk mencari semua anak tangga < tinggi kaki timur dan tambahkan lalu output
   pembelajaran awal : dari soal ini saya mempelajari binary search dan bubble sort. Untuk dimasa depan tolong pelajari time complexity
   1.  bubble sort     DONE
   2.  selection sort
   3.  insertion sort
   4.  quick sort
   5.  counting sort
   6.  radix sort
   7.  merge sort
   8.  linear search
   9.  binary search   DONE
   10. Time Complexity
*/

#include <iostream>
#include <vector>
#include <utility> // untuk swap()

int main (){
    long long testCase {0}, anakTangga {0}, tinggiKaki {0}, banyakTangga {0}, banyakPertanyaan {0};
    // std::vector<long long>jumlahHasil;
    std::cin >> testCase;
    while (testCase--){
        bool swappedFinish = false;
        std::cin >> banyakTangga >> banyakPertanyaan;
        std::vector<long long>v_anakTangga, v_tinggiKaki;
        for (int i {0}; i < banyakTangga; i++){
            std::cin >> anakTangga;
            v_anakTangga.push_back(anakTangga);
        }
        for (int i {0}; i < banyakPertanyaan; i++){
            std::cin >> tinggiKaki;
            v_tinggiKaki.push_back(tinggiKaki);
        }
        /* for(int i {0}; i < banyakTangga - 1 - i; i++){
            for(int j {0}; j < banyakTangga - 1 - i; j++){
                if (v_anakTangga.at(j) > v_anakTangga.at(j+1)){
                    std::swap(v_anakTangga.at(j), v_anakTangga.at(j+1));
                    bool swappedFinish = true;
                }
            }
            if (swappedFinish)
            {
                break;
            }
        } */ // ada tag binary search tapi gk ada gunanya disini sejauh yang dilihat dan ada bubble sort disini itu untuk binary search
         long long jumlah = {0};
         int counter = {0};
         for (int i {0}; i < banyakPertanyaan; i++){
            for (int j = 0 + counter ; j < banyakTangga; j ++){
                if (v_anakTangga.at(j) > v_tinggiKaki.at(i)){ 
                    break;
                }
                jumlah += v_anakTangga.at(j);
                counter++;
            }
            std::cout << jumlah << " ";
            jumlah = 0;
            counter = 0;
         }
         std::cout << '\n';
    }
}