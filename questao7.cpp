#include <iostream>
using namespace std;

int main() {
    /* OBS: prof Alex, essa questão está pedindo a mesma coisa da 2ª questão. Apenas um adendo.*/
    const int LIMITE = 100;//coloquei um limite de valores para não demandar muito do computador.

    int numeros[LIMITE];
    int quantidade;

    cout << "Digite a quantidade de elementos: ";
    cin >> quantidade;

    if (quantidade < 1 || quantidade > LIMITE) {
        cout << "Quantidade inválida." << endl;
        return 0;
    }

    cout << "Digite os valores:" << endl;

    for (int i = 0; i < quantidade; i++) {
        cin >> numeros[i];
    }

    // Insertion Sort
    for (int i = 1; i < quantidade; i++) {
        int valorAtual = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > valorAtual) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = valorAtual;
    }

    cout << "\nLista após a ordenação correta: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}