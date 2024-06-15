#include <iostream>

int main() {
    int i;
    std::cin >> i;
    for(int j = 1; j <= i; j++) {
        if (j % 3 == 0 && j % 5 == 0) continue;
        else if (j % 3 == 0) std::cout << "Fizz ";
        else if (j % 5 == 0) std::cout <<  "Buzz ";
        else std::cout << j << " ";
    }
    return 0;
}