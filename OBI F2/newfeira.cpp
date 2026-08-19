#include <bits/stdc++.h>
using namespace std;

using FilaMenor = priority_queue<int, vector<int>, greater<int>>;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> n >> t;

    FilaMenor todos_produtos;

    vector<FilaMenor> por_tipo(t+1);

    vector<int> tipos(n)

    for (int i = 0; i < n; i++) {
        cin >> tipos[i];
    }

    for (int i = 0; i < n; i++) {
        int preco;
        cin >> preco;
        // Adiciona na fila geral e na fila do tipo específico
        todos_produtos.push(preco);
        por_tipo[tipos[i]].push(preco);
    }

    int c;
    cin >> c;
    long long total = 0;

    for (int i = 0; i < c; i++) {
        int tipod;
        cin >> tipod;

        if (tipod == 0) {
            // Pega o mais barato de todos que ainda não foi vendido
            // (Nota: para controle estrito de itens já vendidos entre filas, 
            // costuma-se usar std::multiset, mas a ideia da fila é ir no .top())
            if (!todos_produtos.empty()) {
                total += todos_produtos.top(); // Olha o menor preço em O(1)
                todos_produtos.pop();         // Remove em O(log N)
            }
        } else {
            // Vai DIRETO na gaveta do tipo solicitado
            if (!por_tipo[tipod].empty()) {
                total += por_tipo[tipod].top();
                por_tipo[tipod].pop();
            }
        }
    }

    cout << total << "\n";

    return 0;
}
