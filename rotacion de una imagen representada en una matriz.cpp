#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}, {4, 5, 6, 7}};

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Rotar la matriz 90 grados en sentido horario
    int temp;
    for (int layer = 0; layer < 2; layer++) {
        int first = layer;
        int last = 4 - 1 - layer;
        for (int i = first; i < last; i++) {
            int offset = i - first;
            temp = matrix[first][i];  // guardar el valor superior

            // izquierda -> arriba
            matrix[first][i] = matrix[last - offset][first];

            // abajo -> izquierda
            matrix[last - offset][first] = matrix[last][last - offset];

            // derecha -> abajo
            matrix[last][last - offset] = matrix[i][last];

            // arriba -> derecha
            matrix[i][last] = temp;  // valor superior
        }
    }

    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
