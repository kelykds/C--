#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;

int nmd;
int md;

void dfs(int u, int p, int d) {
    // u é a sala atual
    // p é a sala de onde viemos
    // d é a distancia da origem até u
    if (d > md) {
        md = d;
        nmd = u;
    }

    for (int v : adj[u]) {
        if (v != p) {
            dfs (v, u, d+1);
        }
    }
}

int main () {

    // indices usados de forma natural. Não matriz
    int n;
    cin >> n;

    adj.resize(n+1);

    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // pode ir de u pra v e de v pra u, isso que está sendo registrado
        // ligações entre salas registradas.
    }

    md = -1; // ir em uma das pontas extremas, garantindo que, caso a sala 1 esteja no meio,
    // o dfs encontre essas duas pontas pra fazer certo.
    dfs(1, 0, 0);
    int noA = nmd;

    md = -1;
    dfs(noA, 0, 0);

    int tmc = md+1;
    cout << tmc;


    return 0;
}