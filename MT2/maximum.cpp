#include <string>
#include <fstream>
#include <iomanip>
#include "show_file.h"

void maximum(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    int count = 0;
    double max = -1000.0;
    double num;
    while (in >> num) {
        count++;
        if (num > max) {
            max = num;
        }
        out << std::fixed << std::setprecision(3) << num << std::endl;
    }
    out << "count=" << count << "/max=" << std::fixed << std::setprecision(3) << max;
}