#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num; 
    cin >> num;
    // armazenar os tamanhos
    int p, m;
    int tamp = 0, tamm = 0;

    for (int i = 0; i < num; i++) {
        int tam;
        cin >> tam;
        if(tam == 1) tamp++;
        else tamm++;
    }
    // pegar as q tem e ver se é igual ou maior que o necessário
    cin >> p >> m;
    if (p < tamp) cout << "N";
    else if (m < tamm) cout << "N";
    else cout << "S";

    return 0;
}
