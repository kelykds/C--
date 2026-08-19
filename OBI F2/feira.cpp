#include <bits/stdc++.h>
using namespace std;

struct produto {
    int indice;
    int tipo;
    int preco;
    bool tem;
};

bool compare(produto a, produto b) {
    if (a.preco != b.preco) return a.preco < b.preco;
    else return a.tipo < b.tipo;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<produto> estande(n);

    for (int i = 0; i < n; i++) {
        estande[i].indice = i+1;
        cin >> estande[i].tipo;
        estande[i].tem = true;
    }

    for (int i = 0; i < n; i++) {
        cin >> estande[i].preco;
    } // cabe um sort?

    sort(estande.begin(), estande.end(), compare);
    
    int c;
    cin >> c;
    long long total = 0;

    for (int i = 0; i < c; i++) { // igual vender de verdade. Vai, procura no estoque, e dá
        int tipod; cin >> tipod;
        if (tipod == 0) {
            // procurar o de menor preço, somar esse ao total vendido no dia e indisponibilizar ele
            for (int j = 0; j < n; j++) {
                if (estande[j].tem) {
                    total += estande[j].preco;
                    estande[j].tem = false; // eliminar custa muito
                    break; // definitivamente não tô sabendo usar isso.
                }
            }
            
        }
        else {
            for (int j = 0; j < n; j++) {
                if (tipod == estande[j].tipo && estande[i].tem) {
                    if (estande[j].tem) {
                        // se não tiver, não soma nada
                        total += estande[j].preco;
                        estande[j].tem = false;
                        break;
                    }
                }
            }
        }
    }

    cout << total;
   
    return 0;
}
