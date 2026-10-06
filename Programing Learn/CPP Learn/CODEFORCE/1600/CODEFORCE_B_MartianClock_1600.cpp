#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
int get_value(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return c - 'A' + 10;
}
 
long long to_decimal(const std::string& s, int base, long long max_val) {
    long long value = 0;
    for (char c : s) {
        int digit = get_value(c);
        if (digit >= base) return -1;
        
        value = value * base + digit;
        if (value > max_val) return -1;
    }
    return value;
}
 
std::string remove_leading_zeros(const std::string& s) {
    size_t first_non_zero = s.find_first_not_of('0');
    if (first_non_zero == std::string::npos) {
        return "0";
    }
    return s.substr(first_non_zero);
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    std::string s;
    if (!(std::cin >> s)) return 0;
 
    size_t colon_pos = s.find(':');
    std::string hours_str = s.substr(0, colon_pos);
    std::string minutes_str = s.substr(colon_pos + 1);
 
    int min_base = 2;
    for (char c : hours_str) min_base = std::max(min_base, get_value(c) + 1);
    for (char c : minutes_str) min_base = std::max(min_base, get_value(c) + 1);
 
    std::string h_clean = remove_leading_zeros(hours_str);
    std::string m_clean = remove_leading_zeros(minutes_str);
 
    if (h_clean.length() <= 1 && m_clean.length() <= 1) {
        long long h = to_decimal(h_clean, min_base, 23);
        long long m = to_decimal(m_clean, min_base, 59);
        if (h >= 0 && h <= 23 && m >= 0 && m <= 59) {
            std::cout << -1 << "\n";
            return 0;
        }
    }
 
    std::vector<int> valid_radixes;
 
    for (int base = min_base; base <= 100; ++base) {
        long long h = to_decimal(hours_str, base, 23);
        long long m = to_decimal(minutes_str, base, 59);
 
        if (h >= 0 && h <= 23 && m >= 0 && m <= 59) {
            valid_radixes.push_back(base);
        }
    }
 
    if (valid_radixes.empty()) {
        std::cout << 0 << "\n";
    } else {
        for (size_t i = 0; i < valid_radixes.size(); ++i) {
            std::cout << valid_radixes[i] << (i + 1 == valid_radixes.size() ? "" : " ");
        }
        std::cout << "\n";
    }
 
    return 0;
}