#ifndef __complex_h__
#define __complex_h__

//! Complex number
struct complex {
  int real;  // Real part
  int img;   // Imaginary part
};

#include <iostream>
using namespace std;

complex sum(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

complex mul(complex a, complex b) {
    complex c;
    c.real = a.real * b.real - a.img * b.img;
    c.img = a.real * b.img + a.img * b.real;
    return c;
}
void mandel(complex c, int n, complex z[]) {
    z[0].real = 0;
    z[0].img = 0;

    for (int i = 1; i < n; i++) {
        z[i] = sum(mul(z[i-1], z[i-1]),c);
    }
}

//! Print array of complex numbers.
void print(const complex z[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    if (z[i].real == 0 && z[i].img == 0)
      cout << 0;
    else {
      if (z[i].real != 0)
        cout << z[i].real;
      if (z[i].img > 0)
        cout  << '+' << z[i].img << 'i';
      else if (z[i].img < 0)
        cout  << z[i].img << 'i';
    }
    cout << ' ';
  }
  cout << "]\n";
}

#endif // __complex_h__
