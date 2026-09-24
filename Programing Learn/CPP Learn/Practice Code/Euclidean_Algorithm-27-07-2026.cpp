#include <iostream>

int main (){
    int bilanganA {0}, sisaAdanB {0}, bilanganB {0}, hasilBagiAdanB {0}, hasilFPB {0};
    std::cout << "Bilangan Awal A dan B FPB/GCD/HCF : ";
    std::cin >> bilanganA >> bilanganB; 
    while (true){
        hasilBagiAdanB = (bilanganA > bilanganB) ? bilanganA/bilanganB : bilanganB/bilanganA;
        if (bilanganA > bilanganB) {
            sisaAdanB = bilanganA - (bilanganB * hasilBagiAdanB);
            bilanganA = bilanganB;
            bilanganB = sisaAdanB;
        } else if (bilanganB > bilanganA) {
            sisaAdanB = bilanganB - (bilanganA * hasilBagiAdanB);
            bilanganB = bilanganA;
            bilanganA = sisaAdanB;
        }
        if (sisaAdanB != 0)
        {
            hasilFPB = sisaAdanB;
        } 
        if (sisaAdanB == 0)
        {
            break;
        }
    }
    std::cout << hasilFPB;
}