#include <iostream>
#include <vector>
#include <string>

std::string longest_prefix(const std::vector<std::string>& v) {
    if (v.empty()) {return "";};
    std::string prefix = v[0];
    for (size_t i = 0; i < v.size(); i++) {
        size_t j = 0;
        while (j < prefix.size() && j < v[i].size() && prefix[j] == v[i][j]){
            ++j;
        }
        prefix = v[i].substr(0,j);
    }
    return prefix;
}