#include <bits/stdc++.h>

using namespace std;

int somaDig(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
};

int main() {

    int s, a, b;
    cin >> s >> a >> b;

    int n = 0;

    for (int i = a; i <= b; i++) {
        if (somaDig(i) == s) n++;
    }

    cout << n;

    return 0;
}

// Código gigante ne?
