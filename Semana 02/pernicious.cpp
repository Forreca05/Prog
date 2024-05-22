#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countOnesInBinary(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

bool isPernicious(int n) {
    return isPrime(countOnesInBinary(n));
}

void printPerniciousPrimes(int a, int b) {
    for (int i = a; i <= b; ++i) {
        if (isPernicious(i) && isPrime(i)) {
            cout << i << ' ';
        }
    }
    cout << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    printPerniciousPrimes(a, b);
    return 0;
}