#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 10, COLS = 10;

int main() {
    // Inicializar la semilla aleatoria
    srand(time(NULL));

    // Crear el tablero de minas
    int mineBoard[ROWS][COLS] = {0};
    int countBoard[ROWS][COLS] = {0};

    // Colocar minas aleatoriamente
    for (int i = 0; i < 10; i++) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        mineBoard[row][col] = 1;
    }

    // Calcular el número de minas alrededor de cada celda
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mineBoard[i][j] == 0) {
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int newRow = i + di;
                        int newCol = j + dj;
                        if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS && mineBoard[newRow][newCol] == 1) {
                            countBoard[i][j]++;
                        }
                    }
                }
            }
        }
    }

    // Mostrar el tablero de minas y el tablero con los números
    cout << "Tablero de minas:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << mineBoard[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Tablero con números:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << countBoard[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
