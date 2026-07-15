#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector<int> v;

    for(int i =0; i<n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    int tam = 0;
    long long sum = v[0];

    int l = 0, r = 0;

    while(l < n && r < n) {
        if (sum <= x) {
            tam = max(tam, r-l+1);
            r ++;
            sum += v[r];
        }
        else {
            sum -= v[l];
            l ++;
        } // explicação no txt
    }

    cout << tam << "\n"; // complexidade O(n)

    return 0;
}