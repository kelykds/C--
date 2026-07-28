#include <bits/stdc++.h>

using namespace std;

int main() { // literalmente two pointers

    long long n;
    cin >> n;
    vector<long long> a(n), b(n);

    // fazer a array b ficar a array a

    // Move L pra direita, R pra esquerda ou adicionar 1 em cada B[i] onde os dois ponteiros tão 
    long long l, r;
    l = 1;
    r = n;

    for (long long l = 0; l < n; l++) {
        long long k;
        cin >> k;

        a[l] = k;

    } // será se guardar tudo é perca de tempo/?

    // caramba, eu tenho que fazer no papel pra não fazer bosta?
    // acho que entendi mais ou menos. Quando Bl ou Br ficar no limite, mudar suas posições

    return 0;
}