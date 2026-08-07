#include <bits/stdc++.h>

using namespace std;

int main() {
    // Essencial para N = 10^6 não dar Time Limit na leitura de dados
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int esq = 0;
    int dir = n - 1;
    int contracoes = 0;

    long long soma_esq = p[esq];
    long long soma_dir = p[dir];

    while (esq < dir) {
        if (soma_esq == soma_dir) {
            esq++;
            dir--;
            soma_esq = p[esq];
            soma_dir = p[dir];
        } 
        else if (soma_esq < soma_dir) {
            esq++;
            soma_esq += p[esq];
            contracoes++;
        } 
        else {
            dir--;
            soma_dir += p[dir];
            contracoes++;
        }
    }

    cout << contracoes << "\n";

    return 0;
}