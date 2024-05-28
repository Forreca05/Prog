#include <map>
#include <string>

void replace(const std::map<char, char>& r, std::string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        for (auto m : r) {
            if (m.first == s[i]) {
                s[i] = m.second;
            } 
        }
    }
}