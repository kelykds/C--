#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> adj;

int nmd;
int md;
vector<int> pai;
vector<int> distA, distB;

void dfs(int u, int p, int d, vector<int>& dist){
    dist[u] = d;
    pai[u] = p;
    
    if (d > md) {
        md = d;
        nmd = u;
    }

    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, d+1, dist);
        }
    }
}

int main() {

    cin >> n;

    adj.resize(n+1);
    pai.resize(n+1);
    distA.resize(n+1);
    distB.resize(n+1);

    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> disttemp(n+1);
    md = -1;
    dfs(1, 0, 0, disttemp);
    int noA = nmd;

    md = -1;
    dfs(noA, 0, 0, distA);
    int noB = nmd;
    int diam = md;

    md = -1;
    dfs(noB, 0, 0, distB);

    vector<int> caminho;
    int cur = noB;
    while (cur != 0) {
        caminho.push_back(cur);
        cur = pai[cur];
    }

    long long qtdm = 0;
    if (diam % 2 != 0) {
        int c1 = caminho[diam / 2];
        int c2 = caminho[(diam / 2) + 1];

        // Conta quantas folhas a distância máxima estão do lado de c1 e de c2
        long long pontas1 = 0, pontas2 = 0;
        // não sei mais kkkkkkkkkkkkkk
        // funções lambda e recursão anônima?
        auto conta_pontas = [&](auto& self, int u, int p, int d, int c_out) -> long long {
            long long cnt = 0;
            if (d == diam/ 2) cnt++;
            for (int v : adj[u]) {
                if (v != p && v != c_out) {
                    cnt += self(self, v, u, d + 1, c_out);
                }
            }
            return cnt;
        };

        pontas1 = conta_pontas(conta_pontas, c1, 0, 0, c2);
        pontas2 = conta_pontas(conta_pontas, c2, 0, 0, c1);

        qtdm = pontas1 * pontas2;
    } 
    // Se o diâmetro for par (1 nó central)
    else {
        int centro = caminho[diam/ 2];
        vector<long long> pontas_ramo;
        long long soma = 0, soma_quadrados = 0;

        auto conta_pontas = [&](auto& self, int u, int p, int d) -> long long {
            long long cnt = 0;
            if (d == diam / 2) cnt++;
            for (int v : adj[u]) {
                if (v != p) {
                    cnt += self(self, v, u, d + 1);
                }
            }
            return cnt;
        };

        for (int v : adj[centro]) {
            long long p = conta_pontas(conta_pontas, v, centro, 1);
            if (p > 0) {
                pontas_ramo.push_back(p);
                soma += p;
                soma_quadrados += p * p;
            }
        }

        // Combinação de pares entre ramos diferentes: (soma^2 - sum(p_i^2)) / 2
        qtdm = (soma * soma - soma_quadrados) / 2;
    }

    // Primeira linha: tamanho do maior ciclo
    cout << diam + 1 << "\n";
    // Segunda linha: quantidade de ciclos desse tamanho
    cout << qtdm << "\n";

    return 0;
}