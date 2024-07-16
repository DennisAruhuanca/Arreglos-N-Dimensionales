#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 10, COLS = 10;

int main() {
    // Inicializar la semilla aleatoria
    srand(time(NULL));

    // Crear el bosque inicial
    int forest[ROWS][COLS] = {0};

    // Generar el bosque inicial con árboles vivos y quemándose aleatoriamente
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (rand() % 5 == 0) {
                forest[i][j] = 1;
            }
        }
    }

    // Mostrar el bosque inicial
    cout << "Bosque inicial:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << forest[i][j] << " ";
        }
        cout << endl;
    }

    // Simular la propagación del fuego
    int newForest[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (forest[i][j] == 0) {
                // Árbol vivo
                int neighbors = 0;
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int newRow = i + di;
                        int newCol = j + dj;
                        if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS && forest[newRow][newCol] == 1) {
                            neighbors++;
                        }
                    }
                }
                if (neighbors > 0) {
                    newForest[i][j] = 1;  // Árbol quemándose
                } else {
                    newForest[i][j] = 0;  // Árbol vivo
                }
            } else if (forest[i][j] == 1) {
                // Árbol quemándose
                newForest[i][j] = 2;  // Árbol quemado
            } else {
                // Árbol quemado
                newForest[i][j] = 2;  // Árbol quemado
            }
        }
    }

    // Mostrar el bosque después de la propagación del fuego
    cout << "Bosque después de la propagación:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << newForest[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
