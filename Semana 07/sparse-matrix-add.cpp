#ifndef __smatrix_h__
#define __smatrix_h__

#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry {
  size_t row;
  size_t col; 
  int value;
};

typedef vector<sm_entry> smatrix;

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
  r.clear(); // Limpa o vetor resultante
  size_t i = 0, k = 0;
  while (i < a.size() && k < b.size()) {
    if (a[i].row < b[k].row || (a[i].row == b[k].row && a[i].col < b[k].col)) {
      // Se o elemento de a vem antes do elemento de b, adiciona o elemento de a
      r.push_back(a[i]);
      ++i;
    } else if (a[i].row > b[k].row || (a[i].row == b[k].row && a[i].col > b[k].col)) {
      // Se o elemento de b vem antes do elemento de a, adiciona o elemento de b
      r.push_back(b[k]);
      ++k;
    } else {
      // Se os elementos são da mesma posição, adiciona a soma dos valores
      if (a[i].value + b[k].value != 0) {
        r.push_back({a[i].row, a[i].col, a[i].value + b[k].value});
      }
      ++i;
      ++k;
    }
  }

  // Adiciona os elementos restantes de a, se houver
  while (i < a.size()) {
    r.push_back(a[i]);
    ++i;
  }

  // Adiciona os elementos restantes de b, se houver
  while (k < b.size()) {
    r.push_back(b[k]);
    ++k;
  }
}


void print(const smatrix& sm) {
  cout << "[ "; 
  for (sm_entry e : sm) {
    cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
  }
  cout << "]\n";
}

#endif // __smatrix_h__