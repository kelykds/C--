#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> estradas; // aqui queremos a distância até um. nada de conta horrível
vector<int> dist;
int md;
int nmd;

void dfs(int u, int p, int d) {
    dist[u] = d;
    for (int v : estradas[u]) {
        if (v != p) {
            dfs(v, u, d+1);
        }
    }
}

int main () {

    int n;
    cin >> n;

    estradas.resize(n+1);
    dist.resize(n+1);

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        estradas[u].push_back(v);
        estradas[v].push_back(u);

    }

    return 0;
}