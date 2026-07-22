#include <iostream>
#include <string>
#include <vector>

using namespace std;

void resolve() {
    string s;
    cin >> s;

    vector<char> pilha;
    bool ok = true;

    for(char c : s) {
        // se for de abertura
        if(c == '(' || c == '[' || c == '{') {
            pilha.push_back(c);
        }
        // se for fechamento
        else {
            if(pilha.empty()) {
                ok = false;
                break;
            }
            char topo = pilha.back();
            if((c == ')' && topo == '(') ||
               (c == ']' && topo == '[') ||
               (c == '}' && topo == '{')) {
                pilha.pop_back(); // Casamento perfeito! Removemos da pilha.
            } else {
                ok = false; // Par errado (ex: topo é '(' mas veio ']')
                break;
            }
        }
    }
    // A cadeia só é válida se não houve erro E se tudo foi fechado (pilha vazia)
    if(ok && pilha.empty()) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}

int main() {

    int quant;
    cin >> quant;

    while(quant--) {
        resolve();
    }
    // pegar a quantidade de leituras (linhas)

    // condições: Nõão contem nenhum caractere
    // bem definida envolvida por parênteses, colc ou chaves
    // formada pela concatenação de duas
    // quais são bem definidas e quais não são

    // coisa fechada: 
    // Mas como saber quando parar de ler? (depois que terminar a da linha) getline
    // como validar
    return 0;
}