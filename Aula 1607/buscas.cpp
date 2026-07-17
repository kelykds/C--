#include <iostream>

using namespace std;

int buscaBinaria(k, p, inicio, fim) {
    if (inicio > fim) {
        cout << "elemento não encontrado";
        return 1;
    }
    int meio = (inicio + fim) / 2;
    if (k(meio) == p) {
        return meio;
    } 
    else if (k[meio] < p) {
        return buscaBinaria(k, p, meio+1, fim)
    }
    else {
        return buscaBinaria(k, p, inicio, meio-1)
    }
}

int buscaLinear(int a[], int n, int x) {
    int idx=-1
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            idx = i;
        }
    }
    return idx; // complexidade O[n]
}