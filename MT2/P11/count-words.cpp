#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <map>

void count_words(const std::string& str, std::vector<std::pair<std::string, size_t>>& count) {
    std::map<std::string, size_t> word_count;
    std::string new_str;
    for(char c : str) {
        if(isalpha(c)) new_str += tolower(c);
        else new_str += c;
    }
    std::string word;
    std::istringstream on(new_str);
    while (on >> word) {
        word_count[word]++;
    }
    for (const auto& pair: word_count) {
        count.push_back(pair);
    }
    sort(count.begin(), count.end());
}

void show_vector(const std::vector<std::pair<std::string, size_t>>& count) {
  std::cout << "[ ";
  for (const auto& e : count) {
    std::cout << e.first << ":" << e.second << ' ';
  }
  std::cout << "]\n";
}