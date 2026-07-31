#include <bits/stdc++.h>

using namespace std;

struct pais {
    int id;
    int ouro;
    int prata;
    int bronze;
};

bool compare(pais a, pais b) {
    if (a.ouro != b.ouro) return a.ouro > b.ouro;
    if (a.prata != b.prata) return a.prata > b.prata;
    if (a.bronze != b.bronze) return a.bronze > b.bronze;
    return a.id < b.id;

};

int main() {

    int n, m;
    cin >> n >> m; // países de 1 a n, 2 modalidades (ou seja, 2 linhas seguintes?)
    vector<pais> tab(n);
    for (int i = 0; i < n; i++) {
        tab[i].id = i+1;
        tab[i].ouro = 0;
        tab[i].prata = 0;
        tab[i].bronze = 0;
    }
    
    for(int i = 0; i < m; i++) {
        int o, p, b;
        cin >> o >> p >> b;
        
        tab[o-1].ouro++;
        tab[p-1].prata++;
        tab[b-1].bronze++;
    }

    sort(tab.begin(), tab.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << tab[i].id << (i == n-1 ? "" : " ");
    }

    return 0;
}
