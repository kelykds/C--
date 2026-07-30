#include <bits/stdc++.h>

using namespace std;

int main() {

    
    int n;
    cin >> n;
    bool iguais = false;

    map<char, int> letras1, letras2;
    // provavelmente tava pegando \n e outros com o getline
    // importante usar cin.ignore() ou cin >> ws;


    // pega cada caractere e já conta quantas vezes ele colocou, armazenando ele na coisa
    for (int i = 0; i < n; i++) {
        char k;
        cin >> k;
        if (k != ' ' && k != ',' && k != '.') {
            letras1[k]++;
        }
    }
    // pelo visto eu preciso que ele reconheça a linha de parada

    for (int i = 0; i < n; i++) {
        char p;
        cin >> p;
        if (p != ' ' && p != ',' && p != '.') {
            letras2[p]++;
        }
    }

    for (auto par : letras1) {
        cout << "'" << par.first << "'" << ":" << par.second << "\n";
    }
    for (auto par : letras2) {
        cout << "'" << par.first << "'" << ":" << par.second << "\n";
    }

    for (const auto par1 : letras1) {
        for (const auto par2 : letras2) {
            if (par1.second == par2.second) iguais = true;
            else iguais = false;
        }
    }

    if (iguais) cout << "S";
    else cout << "N";    

    return 0;
}
