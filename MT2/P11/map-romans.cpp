#include <iostream>
#include <string>
#include <vector>

unsigned roman_to_arab(const std::string& roman) {
    std::vector<std::pair<char, unsigned>> roman_to_int = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    unsigned result = 0;
    unsigned prev_value = 0;
    for (int i = roman.size() - 1; i >= 0; --i) {
        for (const auto& p : roman_to_int) {
            if (roman[i] == p.first) {
                if (p.second < prev_value) {
                    result -= p.second;
                } else {
                    result += p.second;
                }
                prev_value = p.second;
                break; 
            }
        }
    }
    return result;
}