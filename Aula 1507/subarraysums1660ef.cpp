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

    int resp = 0;
    long long sum;

    int l = 0, r = 0;

    while(l < n && r < n) {
        if (sum < x) {
            r ++;
            sum += v[r];
        }
        else {
            if(sum == x) resp ++;
            l ++;
            sum -= v[l];
        } // explicação no txt
    }

    cout << resp << "\n"; // complexidade O(n)

    return 0;
}