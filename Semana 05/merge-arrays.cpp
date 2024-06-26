#ifndef __print_array_h__
#define __print_array_h__

#include <iostream>
using namespace std;

int* merge_arrays(const int a[], int na, const int b[], int nb) {
  int *c = new int[na+nb];          //este e a cena para ser memoria alocada
  int i = 0, j = 0, k = 0;
  while (i < na && j < nb) {
    if (a[i] < b[j]) {
      c[k++] = a[i++];
    }
    else
      c[k++] = b[j++]; 
  }

  while (i < na) {
    c[k++] = a[i++];
  }

  while (j < nb) {
    c[k++] = b[j++];
  }
  return c;
}


void print_array(const int a[], int n){
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) {
    cout << ',' << a[i];
  }
  cout << "]\n";
}

#endif // __print_array_h__