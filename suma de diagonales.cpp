#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int sumPrincipal = 0, sumSecundaria = 0;

    for (int i = 0; i < 4; i++) {
        sumPrincipal += matrix[i][i];
        sumSecundaria += matrix[i][3 - i];
    }

    cout << "La suma de la diagonal principal es: " << sumPrincipal << endl;
    cout << "La suma de la diagonal secundaria es: " << sumSecundaria << endl;

    return 0;
}
