#include <string>
#include <vector>

std::string longest_prefix(const std::vector<std::string>& v) {
    std::string word = v[0];
    for (const std::string& x : v) {
        for (size_t i = 0; i < word.length(); i++) {
            if (x[i] != word[i]) {
                word = word.substr(0,i);
            }
        }
    }
    return word;
}