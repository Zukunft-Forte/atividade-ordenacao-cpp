#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Produto {
    string nome;
    float preco;
};
/* acabei de aprender como o struct funciona. 
Facilitou minha vida na separação para nomes de produtos e os preços.*/
int main() {
    Produto produtos[6] = {
        {"Celular Poco X7", 2000.00},
        {"Mouse Anubis", 180.00},
        {"Caixa 9 volumes mangá dragon ball z", 900.00},
        {"Headset", 250.00},
        {"Webcam", 180.00},
        {"Pendrive", 50.00}
    };
    
    // Selection Sort pelo preco
    for (int i = 0; i < 5; i++) {
        int menor = i;

        for (int j = i + 1; j < 6; j++) {
            if (produtos[j].preco < produtos[menor].preco) {
                menor = j;
            }
        }

        Produto temp = produtos[i];
        produtos[i] = produtos[menor];
        produtos[menor] = temp;
    }

    cout << fixed << setprecision(2);

    cout << "Produtos ordenados por preço:\n";

    for (int i = 0; i < 6; i++) {
        cout << produtos[i].nome
             << " - R$ " << produtos[i].preco << endl;
    }

    return 0;
}