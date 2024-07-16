#include <iostream>
using namespace std;

int main() {
    // Matriz A
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Matriz B
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3] = {0};  // Matriz resultado

    // Multiplicar las matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar las matrices
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Resultado: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
