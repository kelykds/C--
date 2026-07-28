#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) cout << c;
    else if (a == c) cout << b;
    else if (b == c) cout << a;

    return 0; // complexidade O(1) pq sempre vai fazer 3, 4, ou 5 operações.
}