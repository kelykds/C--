#include <iostream>

using namespace std;

vector<int> adj[10005];
int marc[10005];

void dfs(int v) {
    marc[v] = 1;

    for(int i = 0; i < adj[v].size(); i++) {
        int viz = adj[v][i];

        if(marc[viz] == 0) {
            dfs(viz);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}