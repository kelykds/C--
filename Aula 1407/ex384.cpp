#include <iostream> // queue nessa?
#include <vector> // acho que tá mais pra um vetor eu tinha chance?
#include <unordered_set> // nova -> esse numero tá aqui? complexidade O(1)

using namespace std;

int main() {
    int nin;
    cin >> nin;

    vector<int>fila; // acho q esqueci como funciona em c++ (é meio diferente de python)
    unordered_set<int>out;
    for(int i = 0; i < nin; i++) {
        int indice;
        cin >> indice; // neio confuso comparado às outras...
        fila.push_back(indice); // esse é só pra fila (prov. tá tudo errado)
    } // se pá até aqui tá ok? mas como tirar os específicos?

    int saiu;
    cin >> saiu;
    for(int i = 0; i < saiu; i++) {
        int indice;
        cin >> indice;
        out.insert(indice);
    } // agora se teria os outs, os que tem, e ai bom, fica legal c o set
    bool primeiro = true;
    for(int i = 0; i < nin; i++) {
        if (out.count(fila[i]) == 0) {
            if (!primeiro) {
                cout << " ";
            }
            cout << fila[i];
            primeiro = false;
        }
    }
    return 0;
}

// procurar na fila, e se for o mesmo.. mas seria o de um em um
//ler o nº de pessoas, nisso ver onde que ele tá na fila e tirar... Mas como faz?
// o um por um não dá (como fazer certo e não ter que ir de um em um?)

// na real, nesse seria muito maior