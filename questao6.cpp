#include <iostream>
using namespace std;

int main() {
    int numeros[10] = {10, 0 , 1, 9, 11, 777, 5, 8, 26, 18};
/* obs: professor, essa questão 6 no pdf está idêntica ao que está sendo solicitado na questão 1.*/
    cout << "Lista antes da ordenação correta: ";

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    // Insertion Sort
    for (int i = 1; i < 10; i++) {
        int valorAtual = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > valorAtual) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = valorAtual;
    }

    cout << "\nLista depois da ordenação correta: ";

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}