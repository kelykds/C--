// Xxk4odL
#include <bits/stdc++.h>
using namespace std; 

int main() {
     
    int n; 
    cin >> n;

    int qtde = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        qtde += x;
    }

    cout << qtde;

    return 0;
}