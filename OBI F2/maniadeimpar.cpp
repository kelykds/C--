#include <bits/stdc++.h>

using namespace std;

int main() {

    // quem fez o primeiro? e o segundo?....

    int n, m;
    cin >> n >> m;

    int matriz[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            matriz[i][j] = k;
        }
    }

    int counter = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            if (j == 0 && i == 0) {
                if (matriz[i][j] + matriz[i+1][j] % 2 == 0 && matriz[i][j] + matriz[i][j+1] % 2 == 0) {
                    matriz[i][j] += 1;
                    counter++;
                }
                else if (matriz[i][j] + matriz[i+1][j] % 2 == 0) {
                    matriz[i+1][j] += 1;
                    counter++;
                }
                else {
                    matriz[i][j+1] += 1;
                    counter++;
                }
            }
            else if (i == 0 && j < m - 1) {
                if (matriz[i][j] + matriz[i][j-1] % 2 == 0 && matriz[i+1][j] + matriz[i][j] % 2 == 0 && matriz[i][j+1]) {
                    matriz[i][j] += 1;
                    counter++;
                }
                else if (matriz[i][j]) {
                    
                }
            }
            else if ((j > 0 && i > 0) && (j < m && i < n)) {
                if (matriz[i][j] + matriz[i+1][j] % 2 == 0) {

                }
            }
        }
    }

    return 0;
}
