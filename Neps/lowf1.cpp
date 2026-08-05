#include <bits/stdc++.h>

using namespace std;

struct pilotos {
    int id;
    int pontos;
};

bool compare(pilotos a, pilotos b) {
    if(a.pontos != b.pontos) return a.pontos > b.pontos;
    else return a.id < b.id;
};

int main() {

    int n, v;
    cin >> n >> v;

    vector<pilotos> voltas(n+1);

    voltas[0].id = 0;
    voltas[0].pontos = 0;

    for (int i = 1; i <= n; i++) {
        voltas[i].id = i;
    }

    for (int i = 0; i < v; i++) {
        int k;
        cin >> k;
        voltas[k].pontos++;
    }

    sort(voltas.begin(), voltas.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << voltas[i].id << " " << voltas[i].pontos;
        cout << (i == n ? "" : "\n");
    }

    return 0;
}