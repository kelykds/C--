#include <iostream>
using namespace std; 

int main() {
     
    int a, b;
    cin >> a >> b;

    // deveria fazer um identificador de raiz quadrada aqui, certo?
    int qt = 0;

    for (int i = a; i <= b; i++) {
        int sq = sqrt(i);
        int cb = cbrt(i);
        
        if (sq*sq == i && cb*cb*cb == i) qt++;
    }

    cout << qt;

    return 0;
}