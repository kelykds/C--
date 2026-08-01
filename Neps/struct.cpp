#include <bits/stdc++.h>

using namespace std;

struct aluno {
    string nome;
    int nota;
};

bool compare(aluno a, aluno b) {
    if (a.nota != b.nota) return a.nota > b.nota; // retorna o maior
    else return a.nome < b.nome; // retorna em ordem alfabética
};

int main() {

    int n;
    cin >> n;

    vector<aluno>turma(n); // inicializar com o devido tamanho

    for (int i = 0; i < n; i++) {
        string k;
        int p;
        cin >> k >> p;
        turma[i].nome = k; // preencher
        turma[i].nota = p;
    }

    sort(turma.begin(), turma.end(), compare); // utilizar!

    for (int i = 0; i < n; i++) {
        cout << turma[i].nome << ":" << turma[i].nota << (i == n-1 ? "" : " ");
    }

    return 0;
}
