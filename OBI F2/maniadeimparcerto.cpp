#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> original(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> original[i][j];
        }
    }

    vector<vector<int>> tab1 = original, tab2 = original; // testar dois padrões possíveis.
    int g1 = 0, g2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool posipar = ((i+j) % 2== 0);

            // pos par receber par, pos impar receber impar
            if(posipar) {
                if (tab1[i][j] % 2 != 0) {tab1[i][j]++; g1++;}
            } else {
                if (tab1[i][j] % 2 == 0) {tab1[i][j]++; g1++;}
            }

            if(posipar) {
                if (tab2[i][j] % 2 == 0) {tab2[i][j]++; g2++;}
            } else {
                if (tab2[i][j] % 2 != 0) {tab2[i][j]++; g2++;}
            }
        }
    }

    vector<vector<int>> resposta;
    if (g1 <= g2) {
        cout << g1 << "\n";
        resposta = tab1;
    }
    else {
        cout << g2 << "\n";
        resposta = tab2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << resposta[i][j] << (j < m - 1 ? " " : "");
        }
        cout << (i < n - 1 ? "\n" : "");
    }

    return 0;
}
