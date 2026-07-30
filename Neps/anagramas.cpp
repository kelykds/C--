#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin >> ws; // limpeza do \n

    map<char, int> letras1, letras2;

    // Lê exatamente N caracteres da linha 1
    for (int i = 0; i < n; i++) {
        char k;
        cin.get(k); // O cin.get NÃO pula espaços!
        if (k != ' ' && k != ',' && k != '.') {
            letras1[k]++;
        }
    }

    // Limpa a quebra de linha entre a frase 1 e a frase 2
    cin >> ws; 

    // Lê exatamente N caracteres da linha 2
    for (int i = 0; i < n; i++) {
        char p;
        cin.get(p);
        if (p != ' ' && p != ',' && p != '.') {
            letras2[p]++;
        }
    }

    if (letras1 == letras2) cout << "S\n";
    else cout << "N\n";

    return 0;
}