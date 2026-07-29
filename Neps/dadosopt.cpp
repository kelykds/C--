#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    // criar vetor com 13 posições, todas valendo 0 (13 aq pq tem que ser de 0 a 12, queremos de 1 a 12)
    vector<int> freq(13, 0);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        freq[k]++;// temos os valores que vão aparecer, por isso a frequência de cada um pode ser guardada em uma "gaveta" com seu próprio numero
    }

    int mais_apar = *max_element(freq.begin(), freq.end());

    bool primeiro = true;
    for (int i = 1; i <= 12; i++) {
        if (freq[i] == mais_apar) {
            if (!primeiro) cout << " ";
            cout << i;
            primeiro = false;
        }
    }
    cout << "\n";

    return 0;
}
