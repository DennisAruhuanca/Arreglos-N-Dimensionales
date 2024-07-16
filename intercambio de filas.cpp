#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row1 = 0, row2 = 2;

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Intercambiar las filas
    for (int j = 0; j < 4; j++) {
        swap(matrix[row1][j], matrix[row2][j]);
    }

    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
