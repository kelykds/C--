#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> sub;

int dfs(int atual) {
    int contagem = 0;

    for(int filho: adj[atual]) {
        contagem += dfs(filho) + 1;
    }

    sub[atual] = contagem;

    return contagem;
}

int main() {
    int numempl;
    cin >> numempl;
    
    adj.resize(n+1);
    sub.resize(n+1);

    for(int i = 0; i < numemp - 1; i++) {
        int entr;
        cin >> entr;
        adj[entr].push_back(i);
    } // ficou tudo bonitin aq. Como eu faço agr?

    dfs(1);

    for(int i = 1; i <= n; i++) {
        cout << sub[i]; << (i == n ? "" : " ");
    }

    return 0;
}