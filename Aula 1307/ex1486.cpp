#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numn;
    cin >> numn;

    vector<int> val;

    for(int i = 0; i < numn; i++) {
        int num;
        cin >> num;
        if(num == 0) { 
            val.pop_back(); // para cada 0, tira o último
        } else {// se não for 0, ele insere bonitinho
            val.push_back(num);
        }
    }
    int tam = val.size();
    int soma = 0; // agora somar
    for(int i = 0; i < tam; i++) {
        soma += val[i];
    }
    cout << soma;

    return 0;
}