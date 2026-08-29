#include <iostream>
using namespace std;

int main() {
    /* prof Alex, sei que estou falando isso em diversas das questões, mas essa questão também é a mesma coisa do qyue foi solicitado em uma questão anterior.*/
    const int LIMITE = 100;//deixei um limite na quantidade de valores que o usuário pode colocar para que não pese muito para o computador

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

    cout << "\nLista original: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    // Insertion Sort em ordem decrescente
    for (int i = 1; i < quantidade; i++) {
        int valorAtual = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] < valorAtual) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = valorAtual;
    }

    cout << "\nLista ordenada: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}