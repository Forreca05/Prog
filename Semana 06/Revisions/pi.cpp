#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int d,k;
    cin >> k >> d;;
    double x = 0.0;
    for (int i = 0; i <= k; i++) {
        if (i % 2 == 0) {
            x += (1.0 / (2.0 * i + 1.0));
        }
        else {
            x += (-1.0 / (2.0 * i + 1.0));
        }
    }
    x *= 4.0;
    cout << fixed << setprecision(d) << x << endl;
    return 0;
}