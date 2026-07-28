#include <iostream>

int main(){
    int posisiN{0}, n {}, k{}, hasil {0};
    std::cin >> n >> k;
    for(int pengulangan {0} ; pengulangan < n ; pengulangan++){
        int skorPeserta {};
        std:: cin >> skorPeserta;
        if (pengulangan + 1 == k)
        {
            posisiN = skorPeserta;
        } else if (pengulangan + 1 < k && posisiN == 0 && skorPeserta > 0)
        {
            hasil++;
        }
        if (skorPeserta >= posisiN && posisiN != 0)
        {
            hasil++;
        }
        
    }
    std::cout << hasil;
}