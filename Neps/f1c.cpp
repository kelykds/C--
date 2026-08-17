#include <bits/stdc++.h>

using namespace std;

int main() {

    int g, p;
    while (cin >> g >> p && (g != 0 || p != 0)) {

        int matriz[g][p];

        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                int k;
                cin >> k;
                matriz[i][j] = k;
                // o que acontece aqui, de verdade?
            }
        }

        vector<int> pontos(p+1);
        int s;
        cin >> s;

        for (int i = 0; i < s; i++) {
            int k;
            cin >> k;
            vector<int> pontos_por_posicao(k+1, 0);
            for (int j = 0; j < k; j++) {
                cin >> pontos_por_posicao[i];
            }

            vector<int> total_pilotos(p+1, 0);

            for(int i = 0; i < g; i++) {
                for (int j = 0; j < p; j++) {
                    int pos = matriz[i][j];
                    if (pos <= k) {
                        total_pilotos[j+1] += pontos_por_posicao[pos];
                    }
                }
            }

            int maiorp = 0;
            for (int j = 1; j <= p; j++) {
                maiorp = max(maiorp, total_pilotos[j]);
            }

            bool primeiro = true;
            for (int j = 1; j <= p; j++) {
                if (total_pilotos[j] == maiorp) {
                    if (!primeiro) cout << " ";
                    cout << j;
                    primeiro = false;
                }
            }

        }
    }
    
    return 0;
}
