// FREQUENCY ARRAY

#include <iostream>
#include <vector>
 
int main() {
    int testCase;
    std::cin >> testCase;
 
    while (testCase--) {
        int n;
        std::cin >> n;
 
        int freq[101] = {};
 
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            freq[x]++;
        }
 
        std::vector<int> answer;
 
        for (int occurrence = 1; occurrence <= n; occurrence++) {
            for (int value = 100; value >= 1; value--) {
                if (freq[value] >= occurrence) {
                    answer.push_back(value);
                }
            }
        }
 
        for (int x : answer) {
            std::cout << x << ' ';
        }
 
        std::cout << '\n';
    }
 
    return 0;
}