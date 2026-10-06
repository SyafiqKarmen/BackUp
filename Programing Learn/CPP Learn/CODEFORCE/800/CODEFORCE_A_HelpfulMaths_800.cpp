#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;

    std::vector<int> freq(4, 0);

    for (char c : s) {
        if (c >= '1' && c <= '3') {
            freq[c - '0']++;
        }
    }

    std::string result = "";


    for (int i = 1; i <= 3; ++i) {
        while (freq[i] > 0) {
            result += std::to_string(i) + "+";
            freq[i]--;
        }
    }

    if (!result.empty()) {
        result.pop_back();
    }

    std::cout << result << "\n";

    return 0;
}
