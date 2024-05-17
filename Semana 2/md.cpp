#include <iostream>
using namespace std;

int main() {
    int n, x1, y1, total = 0;
    cin >> n;
    cin >> x1 >> y1;
    for (int i = 1; i < n; i++) {
        int x2,y2;
        cin >> x2 >> y2;
        total += abs(x1 - x2) + abs(y1 - y2);
        x1 = x2;
        y1 = y2;
    }
    cout << total << endl;
    return 0;
}