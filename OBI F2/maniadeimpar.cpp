#include <bits/stdc++.h>

using namespace std;

int main() { // literalmente two pointers

    int n, m;
    cin >> n >> m;

    int tabuleiro[n][m]; // a lógica de um tabuleiro:
    // (i + j) == par deve branco
    // (i + j) == impar deve ser preto

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tabuleiro[i][j];
        }
    }

    int gotas = 0;

    if (tabuleiro[0][0] % 2 == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i+j) % 2 == 0) {
                    if (tabuleiro[i][j] % 2 != 0) {
                        tabuleiro[i][j] += 1;
                        gotas++;
                    }
                    else break;
                }
                else {
                    if (tabuleiro[i][j] % 2 == 0) {
                        tabuleiro[i][j] += 1;
                        gotas++;
                    }
                    else break;
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i+j) % 2 == 0) {
                    if (tabuleiro[i][j] % 2 == 0) {
                        tabuleiro[i][j] += 1;
                        gotas++;
                    }
                    else break;
                }
                else {
                    if (tabuleiro[i][j] % 2 == 0) {
                        tabuleiro[i][j] += 1;
                        gotas++;
                    }
                    else break;
                }
            }
        }
    }
    cout << gotas << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tabuleiro[i][j] << (j < m ? " " : "");
        }
        cout << (i < n ? "\n" : "");
    }

    return 0;
}
