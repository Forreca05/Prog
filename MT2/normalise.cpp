#include "print.h"
#include <fstream>
#include <string>

void normalise(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    for(std::string line; std::getline(in, line);) {
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.length() > 0) {
            for(char& c : line) {
                c = toupper(c);
            }
            out << line << '\n';
        }
    }
}