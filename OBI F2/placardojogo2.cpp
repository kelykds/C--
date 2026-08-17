#include <bits/stdc++.h>

using namespace std;

int main() {
    int p;
    cin >> p;

    map<char, int> tabela;

    for (int i = 0; i < p; i++) {
        int k;
        cin >> k;
        tabela.insert(make_pair('P', k));
    }

    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        int k;
        cin >> k;
        tabela.insert(make_pair('C', k));
    }

    cout << 0 << " " << 0 << (p == 0 && c == 0 ? "" : "\n");
    int cc = 0, pc = 0;

    for (const auto& par : tabela) {
        char nome = par.first;
        char tempo = par.second;

        
        if (nome == 'P') pc++;
        else cc++;
        cout << pc << " " << cc << "\n";
    }

    return 0;
}
