#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "show_file.h"

double calc_median(const vector <double>& values) {
  int n = values.size();
  if (n == 0) return 0;
  vector <double> sorted_values = values; 
  sort(sorted_values.begin(), sorted_values.end());
  if (n % 2 != 0) return sorted_values[n/2];
  else {return ((sorted_values[n/2 - 1] + sorted_values[n/2]) / 2.0);}
}

void calc_medians(const string& input_fname, const string& output_fname) {
  ifstream in(input_fname);
  ofstream out(output_fname);
  if (!in.is_open()) {
    return;
  }
  if (!out.is_open()) {
    return;
  }
  string line;
  while(getline(in,line)) {
    if (line.empty() || line[0] == '#') continue;
    stringstream on(line);
    string identifier;
    on >> identifier;
    vector <double> values;
    double num; 
    while (on >> num) {
      values.push_back(num);
    }
    double median = calc_median(values);
    out << identifier << ' ' << fixed << setprecision(1) << median << endl;
  }
  in.close();
  out.close();
}
