#include <bits/stdc++.h>

using namespace std;

struct piloto {
    string nome;
    int pontos;
};

bool compare (piloto a, piloto b) {
    if (a.pontos != b.pontos) {
        return a.pontos > b.pontos;
    }
    return a.nome < b.nome;
};

int main() {

    int n;
    cin >> n;
    
    vector<piloto> classe(n);

    for (int i = 0; i < n; i++) {
        string k;
        int a;
        cin >> k >> a;
        classe[i].nome = k;
        classe[i].pontos = a;
    }

    sort(classe.begin(), classe.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << classe[i].nome << (i == n-1 ? "" : "\n");
    }
    
    return 0;
}
