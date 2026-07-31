#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b) { // não necessário, mas né
    return a < b; // a > b pro contrário
}

int main() {

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        v[i] = p;
    }

    sort(v.begin(), v.end(), compare); // aqui, seria necessário o compare?

    for (int i = 0; i < n; i++) {
        cout << v[i] << (i == n-1 ? "" : " ");
    }

    return 0;
}
