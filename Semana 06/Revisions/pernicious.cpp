#include <iostream>
using namespace std;

bool isprime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int countbinarys(int a) {
    int count = 0;
    while (a > 0) {
        count += a & 1;
        a >>= 1;
    }
    return count;
}

bool ispermicious(int a) {
    return isprime(countbinarys(a));
}

void printpermiciousprime(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isprime(i) and ispermicious(i)) {
            cout << i << ' ';
        } 
    }
    cout << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    printpermiciousprime(a,b);
    return 0;
}