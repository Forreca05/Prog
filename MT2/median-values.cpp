#include "show_file.h"
#include <fstream>
#include <sstream>
#include <iomanip>

void calc_medians(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    std::string line;
    double median;
    while(getline(in, line)) {
        if(line.empty() || line[0] == '#') continue;
        std::stringstream ss(line);
        std::string identifier;
        ss >> identifier;
        double value;
        vector<double> values;
        while (ss >> value) {
            values.push_back(value);
        }
        std::sort(values.begin(), values.end());
        if(values.size() % 2 == 0) {median = 0.5 * (values[values.size() / 2 - 1] + values[values.size() / 2]);}
        else {median = values[values.size() / 2];}
        out << identifier << ' ' << fixed << setprecision(1) << median << std::endl;
    }
}