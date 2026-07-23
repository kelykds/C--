#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9; // Usamos um número gigante para representar "sem caminho / infinito"
int dist[105][105];  // Matriz de distâncias para até 100 vértices

int main() {
    int n, m; // n = vértices, m = arestas
    cin >> n >> m;

    // 1. Inicializamos a matriz
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) dist[i][j] = 0; // A distância de mim para mim mesmo é 0
            else dist[i][j] = INF;    // De resto, consideramos Infinito até ler as arestas
        }
    }

    // 2. Lemos as conexões diretas
    for(int i = 0; i < m; i++) {
        int u, v, peso;
        cin >> u >> v >> peso;
        dist[u][v] = peso;
        dist[v][u] = peso; // Se o grafo for bidirecional (mão dupla)
    }

    // 3. O ALGORITMO FLOYD-WARSHALL (O Trio de 'for')
    for(int k = 1; k <= n; k++) {          // Intermediário K por FORA!
        for(int i = 1; i <= n; i++) {      // Origem
            for(int j = 1; j <= n; j++) {  // Destino
                if(dist[i][k] < INF && dist[k][j] < INF) { // Segurança para não somar com infinito
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Agora dist[i][j] guarda a menor distância entre QUALQUER par (i, j)!
    cout << "Menor distancia do vertice 1 ao 3: " << dist[1][3] << "\n";

    return 0;
}