#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

double average(const string fname) {
    ifstream in(fname);
    double sum = 0.0;
    int count = 0;
    double value;
    while (!in.eof()) {
        if (in >> value) {
            sum += value;
            count++;
        }
        else {
            in.clear();
            in.ignore(1);
        }
    }
    return count > 0 ? sum / count : 0.0;
}