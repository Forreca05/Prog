#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int k, d;
    cin >> k >> d;
    double x = 0.0;
    for (int n = 0; n <= k; n++) {
        x += (pow(-1, n) / (2.0 * n + 1.0));
    }
    x *= 4.0;
    cout << fixed << setprecision(d) << x << endl;
    return 0;
}
