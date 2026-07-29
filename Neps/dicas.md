Quantos valores diferentes existem? set

Soma de uma subsequência contínua? soma de prefixo

Contar quantas vezes cada elemento gigante apareceu? map

Ordenar um vetor? sort(v.rbegin(), v.rend())

Map: Para cada chave existe um valor associado. 
Ex: map<string, int> idade
idade["maria]=17; então o índice maria tem como valor 17! 
Contagem de frequência!!
Se a questão dá inteiros, e pede pra contar a frequência de cada um:
- Se for pequeno dá pra usar um vector<int> freq (x <= 10^6)
- Se for maior ou negativo, tem que usar map.
---
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Mapeia: Número Gigante -> Quantas vezes ele apareceu
    map<long long, int> freq;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        freq[x]++; // O map cria a chave 'x' automaticamente e incrementa o valor!
    }

    // Como percorrer todos os elementos guardados no map:
    // O map JÁ GUARDA AS CHAVES ORDENADAS automaticamente!
    for (auto par : freq) {
        long long numero = par.first;  // 'first' é a CHAVE (o número)
        int quantidade = par.second; // 'second' é o VALOR (a frequência)

        cout << "O numero " << numero << " apareceu " << quantidade << " vezes.\n";
    }
}
---

Sort!

---
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 9};

    // 1. ORDENAR CRESCENTE (1, 2, 5, 8, 9)
    sort(v.begin(), v.end());

    // 2. ORDENAR DECRESCENTE (9, 8, 5, 2, 1)
    sort(v.rbegin(), v.rend());

    // 3. ORDENAR SÓ UMA PARTE (do índice 0 até o 2)
    // sort(v.begin(), v.begin() + 3);
}
---

Set!

---
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DECLARAR:
    set<int> s;

    // 1. INSERIR ELEMENTO:
    s.insert(10);
    s.insert(5);
    s.insert(10); // Ignorado automaticamente! Não aceita repetidos.

    // 2. VERIFICAR SE EXISTE:
    if (s.count(5)) {
        cout << "O numero 5 esta no set!\n";
    }

    // 3. TAMANHO (quantos elementos ÚNICOS existem):
    int qtd_unicos = s.size();

    // 4. PERCORRER O SET (ele já vem ordenado!):
    for (int x : s) {
        cout << x << " "; // Imprime: 5 10
    }
}
---

Soma de prefixo!

---

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<int> v = {0, 3, 1, 4, 2, 5}; // Usar índice iniciando em 1 facilita!
    vector<long long> pref(n + 1, 0);

    // 1. CONSTRUIR O VETOR DE PREFIXO:
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    // 2. CONSULTAR A SOMA NO INTERVALO [L, R]:
    int L = 2, R = 4;
    long long soma = pref[R] - pref[L - 1]; // Soma de v[2] até v[4]
}

--- 

Struct!

---

#include <bits/stdc++.h>
using namespace std;

// DECLARAÇÃO FORA DA MAIN:
struct Aluno {
    string nome;
    int nota;
};

// FUNÇÃO COMPARADORA (para usar com sort):
bool comparaNotas(Aluno a, Aluno b) {
    return a.nota > b.nota; // Quem tem MAIOR nota vem PRIMEIRO
}

int main() {
    vector<Aluno> turma;

    // INSERIR ELEMENTOS:
    turma.push_back({"Maria", 90});
    turma.push_back({"João", 75});

    // ORDENAR USANDO A FUNÇÃO COMPARADORA:
    sort(turma.begin(), turma.end(), comparaNotas);
}
