#include <iostream>
#include <string>
#include <map>
#include <sstream>

void count_words(const std::string& str, std::map<std::string, size_t>& count) {
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        for (char& c : word) {
            c = std::tolower(c);
        }
        auto it = count.find(word);
        if (it == count.end()) {
            count.insert({word, 1});
        } else {
            it->second++;
        }
    }
}

void show_map(const std::map<std::string, size_t>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}