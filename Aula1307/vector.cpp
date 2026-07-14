#include <iostream>
#include <vector> // bib do vector

using namespace std;

int main() {
    vector<int> v; // Declaração

    v.push_back(1); // 1 no final
    v.push_back(2); // 2
    v.push_back(-1); // -1

    v.pop_back(); // tira o último

    for(int i = 0; i < v.size(); i++) { // .size retorna o tamanho atual do vetor
        cout << v[i] << " ";
    }
    cout << "\n";

    v.clear(); // limpa (autoexplicativo)

    // Vetor é linear

    return 0;

}