#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    cin >> ws;

    map<int, int> botasr, botasl;
    // Pegar o bagulho, map num e coiso lá ne?
    for (int i = 0; i < n; i++) {
        int kp;
        cin >> kp;
        char lado;
        cin >> lado;
        if (lado == 'E') botasl[kp]++;
        else botasr[kp]++;
    }

    int pares = 0;

    // temos que ver se a frequência de um é 1 e a do outro tbm
    // ataaa, não um if logoo
    for (auto par : botasl) {
        int tamanho = par.first;
        int qtdl = par.second;

        if (botasr.count(tamanho)) {
            int qtdr = botasr[tamanho];

            pares += min(qtdr, qtdl);
        }
    }

    cout << pares;

    return 0;
}
