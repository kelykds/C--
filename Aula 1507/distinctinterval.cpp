#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector<int> v;

    for(int i =0; i<n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    int tam = 0;
    set<int> s = {v[0]};

    int l = 0, r = 0;

    while(l < n && r < n) {
        if ((int) s.size() == r-l+1) {
            tam = max(tam, r-l+1)/
            r ++/
            s.insert(v[r]);
        }
        else {
            s.erase(v[l]);
            l ++; r --;
        }
    }

    cout << tam << "\n"; // complexidade boa ainda
}