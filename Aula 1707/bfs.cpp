#include <iostream>

using namespace std;

vector<int> adj[10005];
int marc[10005];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++) {
        dist[i] = -1;
    }

    q.push(1); dist[1] = 0; // definir o inicial e dar 0 pra ele

    queue<int> q;
    while(!q.empty()) {
        int v = q.front();

        if(dist[viz] == -1) {
            dist[viz] == dist[v] + 1;
            q.push(viz);
        }
    }

    // aqui teria a saída desejada, de acordo com o problema
}