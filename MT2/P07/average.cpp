#include <string>
#include <fstream>

double average(const std::string fname) {
    std::ifstream in(fname);
    double value;
    double count, avg = 0.0;
    while(!in.eof()) {
        if (in >> value) {
            count++;
            avg += value;
        }
        else {
            in.clear();
            in.ignore(1);
        }
    }
    return avg / count;
}