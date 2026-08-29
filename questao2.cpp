#include <iostream>
using namespace std;

int main() {
    const int LIMITE = 100;// coloquei um limite de números que podem ser inseridos, para que não demande do computador que estou usando agora(ele é fraco)

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

    // Selection Sort
    for (int i = 0; i < quantidade - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < quantidade; j++) {
            if (numeros[j] < numeros[menor]) {
                menor = j;
            }
        }

        int temp = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = temp;
    }

    cout << "\nLista após ordenação correta: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
/* eai prof Alex! Peguei o código da outra questão, dei uma mexida e funcionou como solicitado.*/
    return 0;
}