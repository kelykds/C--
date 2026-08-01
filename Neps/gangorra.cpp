#include <bits/stdc++.h>

using namespace std;

int main() {

    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    bool gangorraeq = false;

    if(P1 * C1 == P2 * C2) gangorraeq = true;
    else if (P1 * C1 > P2 * C2) cout << "-1";
    else cout << 1;

    if(gangorraeq) cout << 0;

    return 0;
}
