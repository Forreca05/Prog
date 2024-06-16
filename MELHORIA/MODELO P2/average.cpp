#include "show_file.h"
#include <fstream>
#include <iomanip>
#include <sstream>

void average(const string& input_fname, const string& output_fname) {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    int lines = 0;
    for (std::string line;getline(in, line); ) {
        std::istringstream ss(line);
        int n = 0;
        double value = 0, total = 0;
        while (ss >> value) {
            total += value;
            n++;
        }
        double avg = total / n;
        lines++;
        out << std::fixed << std::setprecision(3) << avg << std::endl;
    }
    out << "lines=" << lines;
}