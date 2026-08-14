#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int q0, q1, q2, q3;
    
    q0 = (n-2) * (n-2) * (n-2);
    q1 = (n-2) * (n-2) * 6;
    q3 = 8;
    q2 = 12 * (n-2);

    cout << q0 << "\n" << q1 << "\n" << q2 << "\n" << q3;

    return 0;
}
