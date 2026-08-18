#include <iostream>
#include <numeric>

using namespace std;

long long hitungKPK(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (abs(a) / std::gcd(a, b)) * abs(b);
}

int main() {
    long long num1, num2;
    cin >> num1 >> num2;
    cout << hitungKPK(num1, num2) << endl;
    return 0;
}