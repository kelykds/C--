#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<long long> pref(n+1);
    pref[0] = 0;

    for (int i = 1; i <= n; i++) {
        long long k; cin >> k;
        pref[i] = pref[i-1] + k;
    }

    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        long long m = pref[r] - pref[l-1];
        cout << m << (i < q-1 ? "\n" : "");
    }


    return 0;
}
