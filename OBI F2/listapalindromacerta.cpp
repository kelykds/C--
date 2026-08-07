#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int l = 0;
    int r = n - 1;
    int cont = 0;

    while (l < r) {
        if (p[l] == p[r]) {
            l++;
            r--;
        }
        else if (p[l] < p[r]) {
            p[l+1] += p[l];
            l++;
            cont++;
        }
        else {
            p[r-1] += p[r];
            r--;
            cont++;
        }
    }

    cout << cont;

    return 0;
}