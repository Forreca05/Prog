#include <map>
#include <string>

void replace(const std::map<char, char>& r, std::string& s) {
    for (char& c : s) {
        auto it = r.find(c);
        if (it != r.end()) {
            c = it->second;
        }
    }
}