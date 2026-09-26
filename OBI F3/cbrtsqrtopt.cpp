#include <iostream>
using namespace std; 

int main() {
     
    long long a, b;
    cin >> a >> b;

    // deveria fazer um identificador de raiz quadrada aqui, certo?
    int qt = 0;

    for (long long n = 1; ; n++) {
        long long pot6 = n*n*n*n*n*n; // matematicamente 

        if (pot6 > b) break; // para o LAÇO, o LAÇO.
        if (pot6 >= a) qt++;

    }

    cout << qt;

    return 0;
}