#include <bits/stdc++.h>

using namespace std;

int main() {

    // quem fez o primeiro? e o segundo?....

    int p;
    cin >> p;

    map<int, char> tabela;

    for(int i = 0; i < p; i++) {
        int k;
        cin >> k;

        tabela[k] = 'P';
    }

    int c;
    cin >> c;

    for(int i = 0; i < c; i++) {
        int k;
        cin >> k;

        tabela[k] = 'C';
    }

    cout << "0 0\n";
    int pc = 0, cc = 0;

    for (auto par : tabela) {
        char nome = par.second;

        if (nome == 'P') pc++;
        else cc++;

        cout << pc << " " << cc << "\n";
    }

    return 0;
}
