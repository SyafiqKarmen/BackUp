/*#include <iostream>
int main () {
    int N {0}, M {0}, Murid {0}, temp {0}, answer {0}, lolol {0};
    std::cin >> N >> M;

    for (int i {0}; i < N; ++i){
        std::cin >> Murid;
        if (i > 0){
            lolol = temp - Murid;
            (lolol > 0) ? answer += lolol : answer += lolol + Murid;
        }
        temp = Murid;
    }
    std::cout << answer;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    long long M;
    std::cin >> N >> M;


    std::vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    long long gap_terbesar = (M - A[N - 1]) + A[0];

    for (int i = 1; i < N; ++i) {
        gap_terbesar = std::max(gap_terbesar, A[i] - A[i - 1]);
    }

    std::cout << M - gap_terbesar << "\n";

    return 0;
}

// Tidak bisa tanpa array dan terpaksa hanya bisa pakai sort dan cek satu satu