#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int q0, q1, q2, q3;

    if (n == 2) {
        q0 = 0;
        q1 = 0;
        q2 = 0;
        q3 = 8;
        cout << q0 << "\n" << q1 << "\n" << q2 << "\n" << "q3";
        return 0;
    }
    
    q0 = pow((n-2), 3);
    q1 = (n-2) * 6 * 2;
    q3 = 8;
    q2 = pow(n, 3) - q0 - q1 - q3;

    cout << q0 << "\n" << q1 << "\n" << q2 << "\n" << q3;

    return 0;
}
