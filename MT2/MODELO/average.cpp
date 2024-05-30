#include "show_file.h"
#include <fstream>
#include <sstream>
#include <iomanip>

void average(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    int count = 0;
    for(std::string line; getline(in, line);) {
        std::istringstream ss(line);
        double value;
        double sum;
        int c = 0;
        while(ss >> value) {
            sum+= value;
            c++;
        }
        sum /= c;
        count++;
        out << std::fixed << std::setprecision(3) << sum << '\n';
        sum = 0;
    }
    out << "lines=" << count;
}