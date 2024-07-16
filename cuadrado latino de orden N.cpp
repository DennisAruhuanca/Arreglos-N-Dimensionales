#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int matrix[n][n];

    // Llenar la primera fila
    for (int i = 0; i < n; i++) {
        matrix[0][i] = i + 1;
    }

    // Generar el cuadrado latino
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = matrix[i - 1][j] == n ? 1 : matrix[i - 1][j] + 1;
        }
    }

    // Imprimir el cuadrado latino
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
