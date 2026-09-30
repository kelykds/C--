#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> s;
int folhas; // pra contar o n de folhas


void dfs(int k, int p) {
    int filhos = 0;
    for (int v : s[k]) {
        if (v != p) {
            filhos++;
            dfs(v, k); // parte de v, já visitou k;
        }
    }
    if (filhos == 0) folhas++; // já trabalha com a casa 1 já que ela nunca vai ter 0 filhos.
     // sem filhos, k é folha!
}

int main() {

    int n;
    cin >> n;

    s.resize(n+1);
    folhas = 0;

    for (int i = 0; i < n-1; i++) {
        int k, p;
        cin >> k >> p;

        s[k].push_back(p); // lista de adjacência
        s[p].push_back(k);
    }

    dfs(1, 0); // parte do 1, tendo visitado 0;

    cout << folhas;

    return 0;
}