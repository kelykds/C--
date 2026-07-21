#include <iostream>
#include <vector>
#include <algorithm> // min()

using namespace std;

int main() {
    int npessoas; 
    cin >> npessoas;

    if (npessoas == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> tempos(npessoas);
    
    for(int i = 0; i < npessoas; i++) {
        cin >> tempos[i];
    
    } // aqui vamos ter os tempos bonitinhos
    
    int tempotot = 0; 
    
    // do primeiro até o penultimo
    for(int i = 0; i < npessoas - 1; i++) {
        int dif = tempos[i+1] - tempos[i];
        // adiciona o menor valor entre 10 e a dif de tempo
        tempotot += min(10, dif);
    }
    // a última pessoa sempre garante 10s de escada ligada
    tempotot += 10;

    cout << tempotot; // é até simples, eu que não consegui raciocinar

    return 0;
}