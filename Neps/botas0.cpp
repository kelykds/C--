#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<int, int> D, E;

    for (int i = 0; i < n; i++) {
        int kp;
        char pk;
        cin >> kp >> pk;
        if (pk == 'E') E[kp]++;
        else D[kp]++;
    }

    int qtdepares = 0;

    for (auto par : D) {
        int tamanho = par.first;
        int qtded = par.second;

        qtdepares += min(E[tamanho], qtded);
    }

    cout << qtdepares;

    return 0;
}
