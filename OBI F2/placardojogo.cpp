#include <bits/stdc++.h>
using namespace std;

int main() {

    int p;
    cin >> p;

    // mins distintos, ordem cronológica
    vector<int> tempop(p+1);

    if (p != 0) {
        for(int i = 0; i < p; i++) {
            cin >> tempop[i];
        }
    }

    int c;
    cin >> c;

    vector<int> tempoc(c+1);

    if (c != 0) {
        for(int i = 0; i < c; i++) {
            cin >> tempoc[i];
        }
    }

    cout << 0 << " " << 0 << (c == 0 && p == 0 ? "" : "\n");
    int cc = 0, pc = 0;

    for(int i = 0; i < p + c; i++) {
        if (p == 0) {
            for (int j = 0; j < c; j++) {
                cc++;
                cout << 0 << " " << cc << (i == c-1 ? "" : "\n");
            }
            return 0;
        }
        if (tempoc[i] != 0 && tempop[i] != 0) {
            if (tempoc[i] < tempop[i]) cc++;
            else pc++; // eu entendi o problema mas não sei como resolver...

            cout << pc << " " << cc << (i == p+c-1 ? "" : "\n");
        }
        else {
            if (tempoc[i] == 0) pc++;
            else cc++;
            cout << pc << " " << cc << (i == p+c-1 ? "" : "\n");
        }
    } // seria pegar outra estrutura para funcionar? map? int?
    // o correto é realmente pegar uma estrutura que agrupe os dois e me permita guardar quem fez o gol

    // aí é ver quem tá na ordem e ir fazendo as impressões?
    return 0;
}