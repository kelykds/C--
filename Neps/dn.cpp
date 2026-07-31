#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    set<int> kp;

    for (int i = 0; i < n; i++) {
        int pk;
        cin >> pk;
        kp.insert(pk);
    }

    cout << kp.size();
    
    return 0;
}
