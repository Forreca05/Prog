#include <iostream>
#include <fstream>

using namespace std;

int count(const string& fname, const string& word) {
    ifstream in(fname);
    string word_up = word;
    for(char& c: word_up) {
        c = toupper(c);
    }
    int n = 0;
    for(string s; in >> s;) {
        for(char & c: s) {
            c = toupper(c);
        }
        if(s == word_up) {
            n++;
        }
    }
    return n;
}