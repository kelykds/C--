#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector<pair<int, int >> v;

    for(int i =0; i<n; i++) {
        int a; cin >> a;
        v.push_back({a, i});
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i[i] + v[j] == x) {
                cout << v[i] << " " << v[j] << "\n";
                return 0;
            }
        }
    }
    return 0;
}