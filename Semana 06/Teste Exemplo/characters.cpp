#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    if (toupper(n) >= 'A' && toupper(n) <= 'Z') {
        cout << "LETTER";
    }
    else if (n >= '0' && n <= '9') {
        cout << "DIGIT";
    }
    else {
        cout << "OTHER";
    }
    return 0;
}