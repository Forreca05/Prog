#include <map>
#include <iostream>
#include <sstream>

void count_words(const std::string& str, std::map<std::string, size_t>& count) {
  std::istringstream ss(str);
  std::string word;
  while (ss >> word) {
    for (char& c : word) c = std::tolower(c);
    count[word]++;
  }
}

void show_map(const std::map<std::string, size_t>& count) {
  std::cout << "[ ";
  for (const auto& e : count) {
    std::cout << e.first << ":" << e.second << ' ';
  }
  std::cout << "]\n";
}