#include "wc.h"
#include <string>
#include <fstream>
#include <sstream>

wcresult wc(const std::string& filename) {
    unsigned int lines = 0, words = 0, bytes = 0;
    std::ifstream in(filename);
    for (string line; std::getline(in, line);) {
        lines++;
        bytes+= line.length() + 1;
        std::istringstream ss(line);
        std::string word;
        while(ss >> word) words++;
    }
    return {lines, words, bytes};
}