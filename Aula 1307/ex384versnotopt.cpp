#include <iostream> // queue nessa?
#include <vector> // acho que tá mais pra um vetor

using namespace std;

int main() {
    int nin;
    cin >> nin;

    vector<int>fila, outs; // acho q esqueci como funciona em c++ (é meio diferente de python)
    for(int i = 0; i < nin; i++) {
        int indice;
        cin >> indice; // neio confuso comparado às outras...
        fila.push_back(indice); // esse é só pra fila (prov. tá tudo errado)
    } // se pá até aqui tá ok? mas como tirar os específicos?

    int saiu;
    cin >> saiu;
    for(int i = 0; i < saiu; i++) {
        // um pouco mais complicado, acho
        int indice;
        cin >> indice;
        outs.push_back(indice);
    } // agora se teria os outs, os que tem, e ai 

    // talvez se mudar p mais eficiente, nem seja necessário a parte ruim
    for(int i = 0; i < nin; i++) {
        for(int j = 0; j < saiu; j++){
            if(outs[j] != fila[i]) {
                cout << fila[i] << " "; // vai adicionar um espaço adicional no final
            }
        }
    } // escrever a ineficiente e ver oq faz?

}

// procurar na fila, e se for o mesmo.. mas seria o de um em um
//ler o nº de pessoas, nisso ver onde que ele tá na fila e tirar... Mas como faz?
// o um por um não dá (como fazer certo e não ter que ir de um em um?)

// na real, nesse seria muito maior