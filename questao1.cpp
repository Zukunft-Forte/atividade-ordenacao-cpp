#include <iostream>
#include <string>
using namespace std;

    
/* Questão 1 - Selection Sort básico Crie um programa em C++
que possua uma lista com 10 números inteiros definidos diretamente no código.
Implemente o algoritmo Selection Sort para ordenar os valores em ordem crescente. 
Ao final, mostre a lista antes e depois da ordenação. */  

int main()
{
    
    int lista[] = {18, 46, 10, 4, 9, 7, 100, 99, 5, 8  };
    int n = 10;
    cout << "Lista antes da ordenação correta: " << endl; 
    for (int g = 0; g < n; g++){
        cout << lista[g] << " ";        
    }

    for (int i = 0; i < n - 1; i++){
        int menor = i;
        for (int j = i + 1; j < n; j++){
            if (lista[j] < lista[menor]){
                menor = j;
            }
        }
        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }
    cout << "\nLista após ordenação correta: " << endl;
    for (int i = 0; i < n; i++){
        cout << lista[i] << " ";
    }

    return 0;
}