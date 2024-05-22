#ifndef __print_h__
#define __print_h__

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void normalise(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);
    for(string line; getline(in, line);) {
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.length() > 0) {
            for(char& c: line) {
                c = toupper(c);
            }
            out << line << '\n'; // Move a escrita para fora do loop interno
        }
    }
}

//! Show file contents with line number information and 
//! the '|' character indicating the begining and end of lines.
void print(const string& file) {
  ifstream in(file);
  size_t line_nr = 1;
  for (string line; getline(in, line);) {
     cout << line_nr << "|" << line << "|\n";
     line_nr++;
  }
}
#endif // __print_h__