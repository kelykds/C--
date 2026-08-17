#include <bits/stdc++.h>

using namespace std;

int main() { // literalmente two pointers

    long long n;
    cin >> n;
    vector<long long> a(n);

    // fazer a array b ficar a array a

    // Move L pra direita, R pra esquerda ou adicionar 1 em cada B[i] onde os dois ponteiros tão 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } // será se guardar tudo é perca de tempo/?

    long long l = 0, r = n-1;
    long long moedas = 0;

    while (l <= r) {
        if (l == r) {
            if (a[l] % 2 != 0) {
                cout << -1;
                return 0;
            }
            moedas += a[l]/2;
            break;
        }
        if (a[l] == a[r]) {
            moedas += a[l];
            l++;
            r--;
            if (l<=r) moedas +=2;
        }
        else if (a[l] < a[r]) {
            moedas += a[l];
            a[r] -= a[l];
            l++;
            moedas += 1;
        }
        else {
            moedas += a[r];
            a[l] -= a[r];
            r--;
            moedas += 1;
        }
    } 

    cout << moedas;
    // caramba, eu tenho que fazer no papel pra não fazer bosta?
    // acho que entendi mais ou menos. Quando Bl ou Br ficar no limite, mudar suas posições

    return 0;
}
