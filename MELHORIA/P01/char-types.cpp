#include <iostream>

int main() {
    int c;
    int chars = 0, nums = 0, others = 0;
    char s;
    std::cin >> c;
    for (int i = 0; i < c; i++) {
        std::cin >> s;
        if (s >= '0' && s <= '9') nums++;
        else if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')) chars++;
        else others++;
    }
    std::cout << chars << ' ' << nums << ' ' << others;
    return 0;
}