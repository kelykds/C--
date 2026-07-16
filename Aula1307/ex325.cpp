#include <iostream>
#include <vector>

using namespace std;

int main() {
    int npessoas; 
    cin >> npessoas;
    vector<int> tempos, tempmax;
    for(int i = 0; i < npessoas; i++) {
        int tempo;
        cin >> tempo;
        tempos.push_back(tempo);
    } // aqui vamos ter os tempos bonitinhos
    
    for(int i = 0; i < npessoas; i++) {
        tempmax.push_back(tempos[i] + 10);
    } // pega quando cada um saiu da esteira

    // tem que verificar se coincidem...


    return 0;
}