#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n) || n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    int maior_atual = 1;
    int quant = 1;

    vector<long long> v(n+1);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[i] = k;
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i+1]) {
            quant++;
        }
        else {
            quant = 1;
        }
        
        if (quant > maior_atual) maior_atual = quant;
    } // pq eu sei tão pouco dos termos técnicos?

    cout << maior_atual;

    return 0;
}