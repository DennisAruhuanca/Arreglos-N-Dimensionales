#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 2, 6}, {7, 2, 9}};
    int value = 2;

    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Valor a buscar: " << value << endl;
    cout << "El valor " << value << " se encuentra en:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == value) {
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }

    return 0;
}
