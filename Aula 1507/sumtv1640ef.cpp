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

    int l = 0, r = n-1;

    while(l < r) {
        if(v[l].first + v[r].first > x) r--;
        else if(v[l].first + v[r].first < x) l++;
        else{
            cout << v[l].second + 1<< " " << v[r].second + 1 << "\n"; 
            return 0;
         }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}