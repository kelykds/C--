#include <iostream>
#include <string>
using namespace std; 

int main() {
     
    string a, b; // pois o limite é 10 a 9
    cin >> a;
    cin >> b;

    // lógica do casamento: A e B devem ter o mesmo número de dígitos
    // quantos algs tem?
    int alga, algb;
    alga = a.size();
    algb = b.size();

    if (alga > algb) {
        int dif = alga - algb;
        b.insert(0, dif, '0');
    }
    else if (alga < algb) {
        int dif = algb - alga;
        a.insert(0, dif, '0');
    }

    string na = "", nb = "";

    // para a comparação
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            nb += b[i]; // precisaria ser inserido
        }
        else if (a[i] > b[i]) {
            na += a[i];
        }
        else {
            na += a[i];
            nb += b[i];
        }
    }
    long long respa, respb;
    if (na.size() == 0) {
        respa = -1;
    }
    else {
        respa = stoll(na);
    }
    if (nb.size() == 0) {
        respb = -1;
    }
    else {
        respb = stoll(nb);
    }

    if (respb < respa) cout << respb << " " << respa;
    else if (respb > respa) cout << respa << " " << respb;
    else cout << respa << " " << respb; 

    return 0;
}