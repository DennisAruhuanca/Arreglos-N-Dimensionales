#include <iostream>
using namespace std;

int main() {
    int matrix[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int rows = 5, cols = 5;
    int startRow = 0, endRow = rows - 1, startCol = 0, endCol = cols - 1;

    cout << "Recorrido en espiral:" << endl;

    while (startRow <= endRow && startCol <= endCol) {
        // Recorrer la fila superior
        for (int i = startCol; i <= endCol; i++) {
            cout << matrix[startRow][i] << " ";
        }
        startRow++;

        // Recorrer la columna derecha
        for (int i = startRow; i <= endRow; i++) {
            cout << matrix[i][endCol] << " ";
        }
        endCol--;

        // Recorrer la fila inferior
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << matrix[endRow][i] << " ";
            }
            endRow--;
        }

        // Recorrer la columna izquierda
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << matrix[i][startCol] << " ";
            }
            startCol++;
        }
    }

    return 0;
}
