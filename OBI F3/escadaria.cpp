#include <iostream>
#include <vector>

using namespace std;

int main () {

    // degraus com alturas inteiras
    // diferença entre dois degraus consecutivos nunca poderia ser maior que 1.

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i-1] != -1) {
            if (a[i] == -1) {
                a[i] = a[i-1] +1;
            } else {
                a[i] = min(a[i], a[i-1] +1);
            }
        }
    }

    for (int i = n-2; i >= 0; i--) {
        if (a[i+1] != -1) {
            if (a[i] == -1) {
                a[i] = a[i+1] +1;
            } else {
                a[i] = min(a[i], a[i+1] +1);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i < n-1? " " : "");
    }

    // eu deveria saber isso, é muito parecido com a questão de pilhas de moedas da fase 2 desse ano...

    return 0;
}