#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int letters = 0, digits = 0, chars = 0;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            chars++;
        }
    }
    cout << letters << ' ' << digits << ' ' << chars;
    cout << endl;
    return 0;
}