#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int newo = 0;
    while (n) {
        newo *= 10;
        newo += n % 10;
        n /= 10;
    }
    std::cout << newo << std::endl;
    return 0;
}