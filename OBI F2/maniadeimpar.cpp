#include <bits/stdc++.h>

using namespace std;

int main() {

    // quem fez o primeiro? e o segundo?....

    int n, m;
    cin >> m >> n;

    int matriz[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            matriz[i][j] = k
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] + matriz[i+1][j] % 2 == 0 || matriz[i][j] + matriz[i+1][j])
        }
    }

    return 0;
}
