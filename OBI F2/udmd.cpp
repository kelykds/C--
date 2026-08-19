#include <bits/stdc++.h>

using namespace std;

long long rec(long long l, long long a, long long b) {
    long long s = 0, k = 0;
    for (long long i = a; i <= b; i++) {
            s += i;
            k++;
            if (s >= l) break;
    }
    return k;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // padrão pelos gabaritos
    cout.tie(NULL);

    // muitas bolinhas na mesa, joão com caixa vazia
    int p; 
    cin >> p;

    for (int i = 0; i < p; i++) {
        long long l, a, b;
        cin >> l >> a >> b;
        long long re = rec(l, a, b);
        cout << re << (i < p - 1 ? "\n" : "");
    }
    // máximo de jogadas


    return 0;
}
