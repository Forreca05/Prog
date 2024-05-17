#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

void count_words(const std::string& str, std::vector<std::pair<std::string, size_t>>& count)  {
  std::map<std::string, size_t> word_count;
  std::string word;
  for (char c : str) {
    if (isalpha(c) || c == '\'') {
      word += tolower(c);
    }
    else {
      if (!word.empty()) {
        word_count[word]++;
        word.clear();
      }
    }
  }
  if (!word.empty()) {
    word_count[word]++;
  }

  for (const auto& pair: word_count) {
    count.push_back(pair);
  }

  std::sort(count.begin(), count.end());
}

void show_vector(const std::vector<std::pair<std::string, size_t>>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
      std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}
