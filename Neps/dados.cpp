#include <bits/stdc++.h>

using namespace std;

int main() {

    // lançamento de dados
    int n;
    cin >> n;
    vector<int> v, c;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    int mais_apar = 0;
    
    for (int i = 1; i <= 12; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == i) count ++;
        }
        c.push_back(count);
    }
    // aprendi hoje: pegar o valor do maior elemento de um vetor (precisa do asterisco)
    mais_apar = *max_element(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++) {
        if (c[i] == mais_apar && i != c.size() - 1) {
            cout << i+1 << " ";
        } else if (c[i] == mais_apar && i == c.size() - 1) {
            cout << i+1;
        }
    }

    return 0;
}
