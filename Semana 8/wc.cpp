#ifndef __wc_h__
#define __wc_h__

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct wcresult {
  unsigned int lines;
  unsigned int words;
  unsigned int bytes;
};

wcresult wc(const string& filename) {
    unsigned int lines = 0, words = 0, bytes = 0;
    ifstream in(filename);
    for(string line; getline(in, line);) {
        lines++;
        bytes += line.length() + 1;
        istringstream on(line);
        for (string word; on >> word;) {
            words++;
        }
    }
    wcresult result = {lines, words, bytes};
    return result;
}
#endif // __wc_h__