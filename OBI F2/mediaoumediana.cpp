#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int c = 2*a - b;

    cout << c;

    // menor inteiro possível c 
    // a/3 + b/3 + c/3

    // c não é a mediana, c é o menor, ou seja, c < a <= b
    // logo a + b + c / 3 = A
    // b + c = 2a
    // c = 2a - b

    // para A+B+C/3 = C:
    // A + B/3 = 2C/3 // a ideia tá certa aqui...
    // ocorre quando A + B = 2C


    return 0;
}