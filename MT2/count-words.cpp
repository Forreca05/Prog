#include <fstream>
#include <string>

int count(const std::string& fname, const std::string& word) {
    std::ifstream in(fname);
    std::string word_low = word;
    for (char& c : word_low) {
        c = tolower(c);
    }
    std::string x;
    int conta = 0;
    while (in >> x) {
        for (char& c : x) {
            c = tolower(c);
        }
        if (x == word_low) conta++;
    }
    return conta;
}