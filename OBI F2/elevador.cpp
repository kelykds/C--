#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n); 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    } // armazenados? OK!

    if (n == 1 && v[0] < 9) {
        cout << "S";
        return 0;
    }

    bool maiorque = false;

    sort(v.begin(), v.end()); // do menor pro maior, p ver se pra cada um tem algum que a diferença é menor que.
    if (v[0] > 8) {
        cout << "N";
        return 0;
    }

    for (int i = 0; i < n-1; i++) {
        if (v[i+1] - v[i] > 8) maiorque = true; // ainda acho que entraava mais particularidades (se v[i+1] - v[i] <= 8, mas outras duplas?)
    }

    if(maiorque) cout << "N";
    else cout << "S";

    return 0;
}