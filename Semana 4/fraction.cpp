#ifndef __fraction_h__
#define __fraction_h__

#include <iostream>
using namespace std;

struct fraction {
  int num;
  int den;
};

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

fraction add(fraction a, fraction b) {
  fraction result;
  result.num = a.num * b.den + b.num * a.den;
  result.den = a.den * b.den;

  int common = gcd(result.num, result.den);
  result.num /= common;
  result.den /= common;

  if (result.den < 0) {
    result. num = -result.num;
  }
  result.den = abs(result.den);

  return result;
}

fraction mul(fraction a, fraction b) {
  fraction result;
  result.num = a.num * b.num;
  result.den = a.den * b.den;

  int common = gcd(result.num, result.den);
  result.num /= common;
  result.den /= common;
  if (result.den < 0) {
    result. num = -result.num;
  }
  result.den = abs(result.den);

  return result;
}

ostream& operator<<(ostream& out, fraction f) {
  if (f.den == 1) 
    out << f.num;
  else
    out << f.num << '/' << f.den;
  return out;
}


#endif // __fraction_h__

