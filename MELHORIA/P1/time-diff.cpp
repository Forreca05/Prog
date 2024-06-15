#include <iostream>

int main() {
    int n;
    std::cin >> h1 >> m1 >> h2 >> m2;
    if (h1 > h2) std::cout << ((h1-h2) * 60 + (m1-m2));
    else if (h1 == h2) {
        if (m1 > m2) std::cout << m1 -m2;
        else std::cout m2 - m1;
    }
    else std:: cout << ((h2 - h1) * 60 + (m2 - m1));
    return 0;
}