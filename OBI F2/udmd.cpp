#include <bits/stdc++.h>

using namespace std;

long long rec(long long l, long long a, long long b) {
    int s, x = a, k = 0;
    s = x;
    while (s < l && x < b) {
        a++;
        s += x;
        k++;
        rec(l, a, b);
    }
    return k;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // padrão pelos gabaritos
    cout.tie(NULL);

    // muitas bolinhas na mesa, joão com caixa vazia
    int p; cin >> p;
    for (int i = 0; i < p; i++) {
        long long l, a, b;
        cin >> l >> a >> b;
        cout << rec(l, a, b) << (i < p - 1 ? "\n" : "");
    }
    // máximo de jogadas


    return 0;
}
