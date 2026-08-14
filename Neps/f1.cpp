#include <bits/stdc++.h>

using namespace std;

struct {
    int id;
    int pontuação;
}

int main() {

    int g, p;
    cin >> g >> p;
    // se botar em vector, presta? não complica dps?... struct..
    vector<vector<int>> posicoes(g, vector<int>(p));

    for (int i = 0; i < g; i++) {
        for (int j = 0; j < p; i++) {
             cin >> posicoes[i][j];
        }
    }

    int s;


    vector<int> total_pts(p, 0);

    for(int i = 0; i < g; i++) {
        for (int j = 0; j < p; j++) {
            int pos = posicoes[i][j];

            i
        } 
    }

    return 0;
}
