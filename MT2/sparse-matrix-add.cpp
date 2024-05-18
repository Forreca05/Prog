#include "smatrix.h"
#include <algorithm>

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    int ause = 0;
    std::vector<bool> b_processed(b.size(), false);    //vetor com o nº de elementos de b marcados como falso
    for (size_t i = 0; i < a.size(); i++) {
        for (size_t j = 0; j < b.size(); j++) {
            if (a[i].row == b[j].row && a[i].col == b[j].col) {
                r.push_back({a[i].row, a[i].col, a[i].value + b[j].value});
                ause = 1;
                b_processed[j] = true; 
            }
        }
        if (ause == 0) {
            r.push_back(a[i]);
        }
    }
    for (size_t j = 0; j < b.size(); j++) {
        if (!b_processed[j]) {
            r.push_back(b[j]);
        }
    }
    std::sort(r.begin(), r.end());
}