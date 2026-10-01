#include <iostream>
#include <vector>

using namespace std;

int main() {

    // calcular a iluminação final de cada prédio na rua...

    // potência recebida -> se mais de uma, será a maior
    int n; cin >> n;
    vector<int> potencias(n);

    for (int i = 0; i < n; i++) {
        cin >> potencias[i];
    }

    for (int i = 1; i <= n-1; i++){
        if (potencias[i-1] != 0) {
            if (potencias[i] == 0) {
                potencias[i] = potencias[i-1] -1;
            } else{
                potencias[i] = max(potencias[i], potencias[i-1]-1);
            }
        }
    }

    for (int i = n-2; i >= 0; i--) {
        if (potencias[i+1] != 0) {
            if (potencias[i] == 0) {
                potencias[i] = potencias[i+1] -1;
            } else{
                potencias[i] = max(potencias[i], potencias[i-1]-1);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << potencias[i] << (i < n-1 ? " " : "");
    }

    return 0;
}