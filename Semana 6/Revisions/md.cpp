#include <iostream>

int main() {
    int n, x1, y1, total = 0;
    std::cin >> n;
    std::cin >> x1 >> y1;
    for (int i = 0; i < n; i++) {
        int x2, y2;
        std::cin >> x2 >> y2;
        total += abs(x1 - x2) + abs(y1 - y2);
        x1 = x2;
        y1 = y2;
    }
    std::cout << total << std::endl;
    return 0;
}