#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int I1 = 0;
    int I2 = 0; // é switch

    for (int i = 0; i < n; i++) {
        int kp; cin >> kp;
        if (kp == 1) I1++;
        else {
            I2++; // trocam de paridade se tem paridades diferentes. Se tiverem paridades iguais (00, 11) vão manter
            I1++;
        }
    }

    if(I1 % 2 == 0) cout << "0\n"; // o I1 é fácil, se tem mod 2 = 0 significa que ele voltou ao estado inicial
    else cout << "1\n";

    if(I2 % 2 == 0) cout << "0"; 
    else cout << "1";

    return 0;

}
