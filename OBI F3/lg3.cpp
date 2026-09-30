#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> s;
vector<int> tam;

void dfs(int k, int p) {
    // sem distância agora hein...
    tam[k] = 1;
    for (int v : s[k]) {
        if (v != p) {
            dfs(v, k);
            tam[k] += tam[v];
        }
    }
}

int main() {

    int n;
    cin >> n;

    s.resize(n+1);
    tam.resize(n+1);

    for (int i = 0; i < n-1; i++) {
        int k, p;
        cin >> k >> p;

        s[k].push_back(p);
        s[p].push_back(k);
    }
    dfs(1, 0);

    for (int i = 1; i <= n; i++) {
        cout << tam[i] << (i < n ? " " : "");
    }

    return 0;
}