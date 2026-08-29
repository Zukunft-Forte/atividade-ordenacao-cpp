#include <iostream>
using namespace std;
/* essa questão aqui foi o chefão final da lista de exercícios hein, mas consegui desenrolar!*/
const int LIMITE = 100;//também coloquei nessa questão um limite de números que podem ser inseridos na lista para não pesar muito pro computador(meu computador é fraco).

void listarElementos(int lista[], int quantidade) {
    if (quantidade == 0) {
        cout << "Lista atualmente vazia.\n";
        return;
    }

    cout << "Elementos: ";

    for (int i = 0; i < quantidade; i++) {
        cout << lista[i] << " ";
    }

    cout << "\n";
}

void selectionSort(int lista[], int quantidade) {
    for (int i = 0; i < quantidade - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < quantidade; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }

        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }
}

void insertionSort(int lista[], int quantidade) {
    for (int i = 1; i < quantidade; i++) {
        int valorAtual = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j] > valorAtual) {
            lista[j + 1] = lista[j];
            j--;
        }

        lista[j + 1] = valorAtual;
    }
}

int main() {
    int lista[LIMITE];
    int quantidade = 0;
    int opcao;

    do {
        cout << "\n===== MENU: LISTA COMPLETA DE ORDENAÇÃO =====\n";
        cout << "1 - Inserir elementos\n";
        cout << "2 - Listar os elementos\n";
        cout << "3 - Ordenar com Selection Sort\n";
        cout << "4 - Ordenar com Insertion Sort\n";
        cout << "5 - Limpar lista\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            int quantidadeInserir;

            cout << "Olá! Quantos elementos deseja inserir? ";
            cin >> quantidadeInserir;

            if (quantidadeInserir < 1 ||
                quantidade + quantidadeInserir > LIMITE) {

                cout << "Quantidade inválida ou limite de 100 elementos excedido.\n";
            }
            else {
                for (int i = 0; i < quantidadeInserir; i++) {
                    cout << "Digite o elemento " << i + 1 << ": ";
                    cin >> lista[quantidade];

                    quantidade++;
                }

                cout << "Elementos inseridos com sucesso.\n";
            }
        }

        else if (opcao == 2) {
            listarElementos(lista, quantidade);
        }

        else if (opcao == 3) {
            if (quantidade == 0) {
                cout << "Não é possível ordenar: a lista está vazia.\n";
            }
            else {
                selectionSort(lista, quantidade);

                cout << "Lista após implementação do Selection Sort:\n";
                listarElementos(lista, quantidade);
            }
        }

        else if (opcao == 4) {
            if (quantidade == 0) {
                cout << "Não é possível ordenar: a lista está vazia.\n";
            }
            else {
                insertionSort(lista, quantidade);

                cout << "Lista após implementação do Insertion Sort:\n";
                listarElementos(lista, quantidade);
            }
        }

        else if (opcao == 5) {
            quantidade = 0;

            cout << "Lista limpa com sucesso. Valores removidos.\n";
        }

        else if (opcao == 0) {
            cout << "Programa encerrado.\n";
        }

        else {
            cout << "Opcao inválida.\n";
        }

    } while (opcao != 0);

    return 0;
}