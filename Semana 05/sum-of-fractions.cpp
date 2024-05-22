#ifndef __fraction_h__
#define __fraction_h__

struct fraction {
  int num;
  int den;
};

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


fraction sum(const fraction fa[], int n) {
    int lcm_value = fa[0].den;
    int sum_num = fa[0].num;

    // Calculate the least common multiple and sum of numerators
    for (int i = 1; i < n; ++i) {
        int current_lcm = (lcm_value * fa[i].den) / gcd(lcm_value, fa[i].den);
        sum_num = sum_num * (current_lcm / lcm_value) + fa[i].num * (current_lcm / fa[i].den);
        lcm_value = current_lcm;
    }

    // Calculate the greatest common divisor of the sum of numerators and the least common multiple
    int common_divisor = gcd(sum_num, lcm_value);

    // Construct the resulting fraction
    fraction result = {sum_num / common_divisor, lcm_value / common_divisor};
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
