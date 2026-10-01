#include <iostream>
#include <vector>

using namespace std; 

int main() {

    int n, s;
    cin >> n >> s;

    vector<int> si(n); // já vai estar em ordem crescente
    // justamente por isso, para ser possível verificar se a soma tá maior ou menor

    int l = 0, r = n-1;
    bool existe = false;

    for (int i = 0; i < n; i++) {
        cin >> si[i];
    }

    for (int i = 0; i < n; i++) {
        if (si[l]+si[r] == s) {
            existe = true;
            break; // será se eu vou usar certo uma vez na vida?
        }
        else {
            if (si[l]+si[r] < s) {
                l++;
            }
            else {
                r--;
            }
        }
    } // tá funcionando, só não esperava ter que voltar pra trás.. (ou não)
    // O que fazer pra verificar o certo? Uai, o exemplo que tava errado? AEEEE

    if (existe) cout << "SIM";
    else cout << "NAO";
    
    return 0;
}