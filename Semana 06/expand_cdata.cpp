#ifndef __cdata_h__
#define __cdata_h__

struct cdata {
  int count;
  int value;
};

#include <iostream>
using namespace std;

int* expand_cdata(const cdata a[], int n) {
  int count, j = 0;
  for (int i = 0; i < n; i++) {
    count += a[i].count;
  }
  int* c = new int[count];
  for (int i = 0; i < n; i++) {
    int b = a[i].count;
    while (b != 0) {
      c[j++] = a[i].value;
      b--;
    }
  }
  return c;
}

void print_array(const int a[], int n) {
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) {
    cout << ',' << a[i];
  }
  cout << "]\n";
}

#endif // __cdata_h__