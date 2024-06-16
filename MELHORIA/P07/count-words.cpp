#include <fstream>

int count(const std::string& fname, const std::string& word) {
    std::ifstream in(fname);
    std::string w;
    int count = 0;
    while(in >> w) {
        tolower(w);
        if(w == tolower(word)) count++;
    }
    return count;
}