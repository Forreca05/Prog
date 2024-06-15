#include <iostream>

int main() {
    char c;
    std::cin >> c;
    if (c <= '9' && c >= '0') std::cout << "DIGIT";
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) std::cout << "LETTER";
    else std::cout << "OTHER";
    return 0;
}