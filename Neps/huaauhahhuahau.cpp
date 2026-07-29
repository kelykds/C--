#include <bits/stdc++.h>

using namespace std;

int main() {

    // até 50 caracteres
    string seq;
    getline(cin, seq);

    vector<char> v;
    bool iguais = true; // ponteiros??

    // jeito mais paia mas pelo menos é o que eu consigo: colocar cada caractere em um vetor, dar popback no que for consoante e ver se o inverso vai

    for (int i = 0; i < int(seq.size()); i++) {
        if (seq[i] == 'a' || seq[i] == 'e' || seq[i] == 'i' || seq[i] == 'o' || seq[i] == 'u') v.push_back(seq[i]);
    }

    if (v.size() == 0) {
        cout << "N";
        return 0;
    }

    if (v.size() == 1) {
        cout << "S";
        return 0;
    }

    int tam = v.size();

    // a ideia foi: Acessar os opostos (iteração reversa), ver se eles são iguais e mudar "iguais"
    // Separei quando v.size() é par e quando é impar, pq ficou mais fácil pra mim
    // Demorei muito, tive que pesquisar como traduzir minha ideia em código, mas aprendi:
    // v.erase, que não sabia, v.begin()
    // O código tá bem ruim, mas priorizei conseguir fazer já que vai ser no máximo 50 char

    if (v.size() % 2 == 0) {
        for (int i = 0; i < int(v.size()); i++) {
            if (v[i] != v[tam - 1 - i]) iguais = false;
        }
        if (iguais) cout << "S";
        else cout << "N";
        return 0;
    }
    else {
        int meio = v.size() / 2;
        v.erase(v.begin() + meio);
        tam = v.size();
        for (int i = 0; i < tam; i++) {
            if (v[i] != v[tam - 1 - i]) iguais = false;
        }
        if (iguais) cout << "S";
        else cout << "N";
    }

    // utilizava two pointers

    return 0;
}
