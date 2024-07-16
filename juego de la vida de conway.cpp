#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 10, COLS = 10;

int main() {
    // Inicializar la semilla aleatoria
    srand(time(NULL));

    // Crear el tablero inicial
    int initialBoard[ROWS][COLS] = {0};

    // Generar el tablero inicial con células vivas y muertas aleatoriamente
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (rand() % 2 == 0) {
                initialBoard[i][j] = 1;
            }
        }
    }

    // Mostrar el tablero inicial
    cout << "Tablero inicial:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << initialBoard[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular el estado del tablero en la segunda generación
    int nextBoard[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int liveNeighbors = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    if (di == 0 && dj == 0) {
                        continue;
                    }
                    int newRow = i + di;
                    int newCol = j + dj;
                    if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS && initialBoard[newRow][newCol] == 1) {
                        liveNeighbors++;
                    }
                }
            }
            if (initialBoard[i][j] == 1) {
                if (liveNeighbors < 2 || liveNeighbors > 3) {
                    nextBoard[i][j] = 0;  // Célula muere
                } else {
                    nextBoard[i][j] = 1;  // Célula sigue viva
                }
            } else {
                if (liveNeighbors == 3) {
                    nextBoard[i][j] = 1;  // Célula nace
                } else {
                    nextBoard[i][j] = 0;  // Célula sigue muerta
                }
            }
        }
    }

    // Mostrar el tablero de la segunda generación
    cout << "Tablero de la segunda generación:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << nextBoard[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
