#include "print_vector.h"
#include <vector>

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max) {
  for (T& x : v) {
    if (x < min) {
      x = min;
    }
    else if (x > max) {
      x = max;
    }
  }
}