#include <iostream>
using namespace std;

int main() {
    int numeros[10] = {64, 25, 12, 22, 11, 90, 34, 7, 56, 18};
    int quantidadeTrocas = 0;

    cout << "Lista original: ";

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n";

    // Selection Sort
    for (int i = 0; i < 9; i++) {
        int menor = i;

        for (int j = i + 1; j < 10; j++) {
            if (numeros[j] < numeros[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int temp = numeros[i];
            numeros[i] = numeros[menor];
            numeros[menor] = temp;

            quantidadeTrocas++;

            cout << "PASSO: " << quantidadeTrocas << ": ";

            for (int k = 0; k < 10; k++) {
                cout << numeros[k] << " ";
            }

            cout << "\n";
        }
    }

    cout << "\nQuantidade total de trocas: "
         << quantidadeTrocas << endl;

    return 0;
}