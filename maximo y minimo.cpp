#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int max = matrix[0][0], min = matrix[0][0];
    int maxRow, maxCol, minRow, minCol;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "El valor máximo es: " << max << " (Fila " << maxRow << ", Columna " << maxCol << ")" << endl;
    cout << "El valor mínimo es: " << min << " (Fila " << minRow << ", Columna " << minCol << ")" << endl;

    return 0;
}
