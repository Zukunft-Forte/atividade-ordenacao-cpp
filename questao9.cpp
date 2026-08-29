#include <iostream>
#include <string>
#include <iomanip> //com essa biblioteca, consigo manipular as casas decimais!

using namespace std;

struct Aluno {
    string nome;
    float nota;
};

int main() {
    Aluno alunos[8] = {
        {"Ana", 8.5},
        {"Bruno", 7.2},
        {"Carlos", 9.3},
        {"Daniela", 6.8},
        {"Eduarda", 9.7},
        {"Ferdinando Fernando Fernandes", 8.9},
        {"Gabriel", 10.0},
        {"Helena", 9.1}
    };

    // Implementando o Insertion Sort da maior nota para a menor
    for (int i = 1; i < 8; i++) {
        Aluno alunoAtual = alunos[i];
        int j = i - 1;

        while (j >= 0 && alunos[j].nota < alunoAtual.nota) {
            alunos[j + 1] = alunos[j];
            j--;
        }

        alunos[j + 1] = alunoAtual;
    }

    cout << fixed << setprecision(1); /* essa lista de exercícios está sendo muito boa pois 
    estou aprendendo muitas coisas novas sobre c++. Como esse fixed setprecision(1), que
    descobri que funciona como o .%2f para casas decimais/pontos flutuantes.*/

    cout << "Ranking geral dos alunos:\n";

    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " - "
             << alunos[i].nome
             << " | Nota: " << alunos[i].nota << endl;
    }

    return 0;
}