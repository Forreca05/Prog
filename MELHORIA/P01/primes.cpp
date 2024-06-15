#include <iostream>
int main() {
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true; // Variável para verificar se 'i' é primo
        for (int j = 2; j <= i / 2; j++) { // Verificar divisores até 'i/2'
            if (i % j == 0) {
                isPrime = false; // 'i' não é primo se for divisível por 'j'
                break; // Sair do laço se encontrarmos um divisor
            }
        }
        if (isPrime) {
            std::cout << i << ' '; // Imprimir 'i' se for primo
        }
    }
    return 0;
}