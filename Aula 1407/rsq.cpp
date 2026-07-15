#include <iostream> 
#include <vector>

// Given an array of n integers, your task is to process q queries of the form: what is the sum of values in range [a,b]?

using namespace std;
// tem que ser inteligente -> usando prefixo (soma de prefixo)
int main() {
    int n, operacoes;
    cin >> n >> operacoes;
    vector<int>vetor(n+100), pref(n+100); // meu vetor tá vazio e tem n casas (não tem que dar push_back)
    pref[0] = 0; // é o vetor prefixo, que vai ajudar a não ter muita coisa

    for(int i = 0; i < n; i++) {
        // ler
        cin >> vetor[i];
        // pegar já a soma
        pref[i] = pref[i-1] + vetor[i];
    }


    for(int i = 0; i < operacoes; i++) {
        // ler as operações
        int A, B;
        cin >> A >> B;
        cout << pref[B] - pref[A-1] << endl;
    }

    return 0;
}