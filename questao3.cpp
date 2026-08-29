#include <iostream>
using namespace std;

int main() {
    const int LIMITE = 100;//coloquei esse limite já que o computador que estou usando é meio fraco, para não pesar nele(não estou com o meu no momento)

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

    cout << "\nLista antes da ordenação coreta: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    // Selection Sort em ordem decrescente
    for (int i = 0; i < quantidade - 1; i++) {
        int maior = i;

        for (int j = i + 1; j < quantidade; j++) {
            if (numeros[j] > numeros[maior]) {
                maior = j;
            }
        }

        int temp = numeros[i];
        numeros[i] = numeros[maior];
        numeros[maior] = temp;
    }

    cout << "\nLista após a ordenação correta: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}