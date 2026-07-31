#include <bits/stdc++.h>

using namespace std;

struct alunos {
    string nome;
    int nota;
};

bool compare(alunos a, alunos b) {
    if (a.nota != b.nota) return a.nota > b.nota; // A vem antes de B?
    return a.nome < b.nome; // Se as notas forem iguais, vai por ordem alfabética (string > string faz isso)
}; 

int main() {

    int n; // n alunos, nome e na outra linha nota? ou em seguida? quais os limites do cin?
    cin >> n;

    vector<alunos> turma(n); // uma gaveta com todas as fichas nome+nota;
    for (int i = 0; i < n; i++) {
        string nome;
        int nota;
        cin >> nome >> nota;
        turma[i].nome = nome;
        turma[i].nota = nota;
    }

    sort(turma.begin(), turma.end(), compare); // pega as condições do compare

    for (int i = 0; i < n; i++) {
        cout << turma[i].nome << (i == n-1 ? "" : " "); // se o i for o último não imprime o espaço
    }

    return 0;
}
