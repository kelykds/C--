#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M, dif, O; // M é de otávio,  do irmão mais novo
    cin >> N >> M; // dif é a diferença entre eles, O é de Orlando

    dif = M - N; // a diferença entre o do meio e o mais velho
    O = M + dif; // A do mais velho é igual a do meio mais a diferença 

    cout << O;


    return 0;
}