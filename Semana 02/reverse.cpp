#include <iostream>
using namespace std;

int main() {
    int x,k = 0;
    cin >> x;
    while (x != 0) {
        int d = x % 10;
        k = k * 10 + d;
        x /= 10;
    }
    cout << k << endl;
    return 0;
}