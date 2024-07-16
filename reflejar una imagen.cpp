#include <iostream>
using namespace std;

int main() {
    int matrix[6][6] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 1}, {2, 3, 4, 5, 6}, {7, 8, 9, 1, 2}, {3, 4, 5, 6, 7}};

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Reflejar la matriz horizontalmente
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            swap(matrix[i][j], matrix[i][5 - j]);
        }
    }

    cout << "Matriz reflejada horizontalmente:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
