#ifndef __show_file_h__
#define __show_file_h__

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void maximum(const string& input_fname, const string& output_fname) {
    ifstream fin(input_fname);
    ofstream fout(output_fname);
    double max_value = -1000;
    int count = 0;
    double num;
    while (fin >> num) {
        count++;
        if (num > max_value) {
            max_value = num;
        }
        fout << fixed <<setprecision(3) << num <<endl;  
    }
    fout << "count=" << fixed << setprecision(3) << count << "/max=" << max_value << endl;
}

//! Show file name and the contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}
#endif // __show_file_h__#include <iostream>
