#include <iostream>

using namespace std;

long long raizquadrada(long long num) {
    if (num == 0 || num == 1) {
        return num; // caso basico
    }
    long long inicio = 1;
    long long fim = num;
    long long resposta = 0;

    while(inicio <= fim) {
        long long meio = (inicio + fim) / 2;
        if (meio * meio == num) {
            return meio;
        }
        if (meio * meio < num) {
            resposta = meio;
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return resposta;
}

int main() {
    int n;
    cin >> n;
    cout << raizquadrada(n);
    return 0;
}