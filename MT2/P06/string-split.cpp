#include <vector>
#include <string>
#include "print_string.h"  

void split(const std::string& s, std::vector<std::string>& v) {
    size_t pos = 0; 
    size_t found;
    while ((found = s.find(' ', pos)) != std::string::npos) {
        if (!s.substr(pos, found - pos).empty()) {
            v.push_back(s.substr(pos, found - pos));
        }
        pos = found + 1;  
    }
    if (!s.substr(pos, found - pos).empty()) v.push_back(s.substr(pos));
}