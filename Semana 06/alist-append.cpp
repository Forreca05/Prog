#ifndef __alist_h__
#define __alist_h__

#include <iostream>
#include <cstdarg>
using namespace std;

//! Array list.
struct alist {
  int size;       // Number of elements.
  int* elements;  // List elements.
};

//! Build an empty list.
alist* empty() {
  return new alist { 0, nullptr };
}

//! Build array list.
alist* build(int n, int v[]) {
  alist* al = new alist;
  al->size = n;
  if (n == 0) {
    al->elements = nullptr;
  } else {
    al->elements = new int[n];
    for (int i = 0; i < n; i++) {
      al->elements[i] = v[i];
    }
  }
  return al;
}

//! Append function (declaration only, must be implemented).
void append(alist* a, const alist* b) {
  int* c = new int[a->size + b->size];
  for (int i = 0; i < a->size; i++) {
    c[i] = a-> elements[i];
  }
  for (int i = 0; i < b->size; i++) {
    c[a->size + i] = b->elements[i];
  }
  delete[] a->elements;
  a->elements = c;
  a->size += b->size;
}

//! Destroy array list
void destroy(const alist* al) {
  delete [] al->elements;
  delete al;
}

void print(const alist* al) {
  cout << '[';
  for (int i = 0; i < al->size; i++) { 
    cout << ' ' << al->elements[i];
  }
  cout << " ]\n";
}

#endif // __alist_h__
