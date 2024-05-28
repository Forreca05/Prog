#include <iostream>
#include <vector>
#include <algorithm> // Para std::max

using namespace std;

// Função para mostrar o conteúdo de um vetor 2D
void show_vector(const vector<vector<int>>& v) {
    cout << "{";
    for (const auto& line : v) {
        cout << "{ ";
        for (const auto& elem : line)
            cout << elem << ' ';
        cout << "} ";
    }
    cout << "}\n";
}

bool max_filter(vector<vector<int>>& v, int n) {
    // Validar se n é ímpar
    if (n % 2 == 0) return false;

    int rows = v.size();
    int cols = v[0].size();

    // Validar se todas as dimensões da matriz são maiores ou iguais a n
    if (rows < n || cols < n) return false;

    // Matriz de saída para armazenar os novos valores
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    int offset = n / 2;

    // Aplicar o filtro máximo
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int max_value = v[i][j];

            // Verificar a vizinhança de n x n
            for (int di = -offset; di <= offset; ++di) {
                for (int dj = -offset; dj <= offset; ++dj) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        max_value = max(max_value, v[ni][nj]);
                    }
                }
            }

            result[i][j] = max_value;
        }
    }

    // Substituir a matriz original pelos novos valores
    v = result;
    return true;
}
