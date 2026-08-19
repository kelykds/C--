#include <bits/stdc++.h>
using namespace std;

long long calcular_rodadas(long long L, long long a, long long b) {
    // 1. Número máximo de elementos disponíveis entre 'a' e 'b'
    long long max_k = b - a + 1;

    // 2. Bhaskara para achar o 'k' exato que faz a soma atingir L
    double B = 2.0 * a - 1.0;
    double delta = B * B + 8.0 * L;
    
    // ceil() arredonda para cima, pois se der ex: 2.1 rodadas, precisamos de 3
    long long k = ceil((-B + sqrt(delta)) / 2.0);

    // 3. Não podemos usar mais elementos do que o limite 'b' permite
    return min(k, max_k);
}

int main() {

    int p;
    cin >> p;

    for (int i = 0; i < p; i++) {
        long long l, a, b;
        cin >> l >> a >> b;
        long long re = calcular_rodadas(l, a, b);
        cout << re << (i < p - 1 ? "\n" : "");
    }

    return 0;
}