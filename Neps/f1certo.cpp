#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int g, p;
    // A questão costuma rodar enquanto g e p forem diferentes de 0
    while (cin >> g >> p && (g != 0 || p != 0)) {

        int matriz[g][p];
        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                cin >> matriz[i][j];
            }
        }

        int s;
        cin >> s;
        while (s--) {
            int k;
            cin >> k;
            vector<int> pontos_por_posicao(k + 1, 0);
            for (int i = 1; i <= k; i++) {
                cin >> pontos_por_posicao[i];
            }

            vector<int> total_pilotos(p + 1, 0);

            // Somar pontos de cada corrida
            for (int i = 0; i < g; i++) {
                for (int j = 0; j < p; j++) {
                    int pos = matriz[i][j];
                    if (pos <= k) {
                        total_pilotos[j + 1] += pontos_por_posicao[pos];
                    }
                }
            }

            // Descobrir a pontuação máxima
            int maiorp = 0;
            for (int j = 1; j <= p; j++) {
                maiorp = max(maiorp, total_pilotos[j]);
            }

            // Imprimir todos os campeões (tratar empates)
            bool primeiro = true;
            for (int j = 1; j <= p; j++) {
                if (total_pilotos[j] == maiorp) {
                    if (!primeiro) cout << " ";
                    cout << j;
                    primeiro = false;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
