#include <iostream>
#include <vector>
#include <string>

int main () {
    std::vector<std::string> daftar;
    std::string nama;
    int pendaftar {0}, ngantri {0};
    std::cin >> pendaftar >> ngantri;
    for (int i {0}; i < pendaftar; i++){
        std::cin >> nama;
        daftar.push_back(nama);
    }
    for (int i {0}; i < ngantri; i++){
        std::cin >> nama;
        bool ditemukan = false;
        for (int j {0}; j < pendaftar; j++){
            if (nama == daftar[j]){
                std::cout << j + 1 << '\n';
                ditemukan = true; 
                break;
            }
        }
        if (!ditemukan) {
            std::cout << "-1" << '\n';
        }
    }
}