#include <iostream>
using namespace std;

int main() {
  int x; // Declares x as a variable of type int.
  cin >> x; // Reads input value for x.
  int y = x; 
  cout << x << ' ' << x * y - x + 1 << '\n'; // Prints value of x and y.
  return 0;
} 