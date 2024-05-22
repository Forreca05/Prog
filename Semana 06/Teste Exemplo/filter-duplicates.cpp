#ifndef __print_array_h__
#define __print_array_h__

#include <iostream>
using namespace std;

int filter_duplicates(const int a[], int n, int b[]) {
    b[0] = a[0];
    int j = 1;
    int l = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            b[j++] = a[i]; 
            l++;
        }
    }
    return l;
}

void print_array(const int a[], int n) {
  cout << '[';
  if (n > 0) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
      cout << ',' << a[i];
    }
  }
  cout << "]\n";
}

#endif // __print_array_h__
