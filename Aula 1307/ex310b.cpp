#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 2 linhas, 4 em cada. x0 y0 x1 y1
    // vamo pegar todas essas, combinar da forma: x0 y0, x0 y1, x1 y0 e x1 y1
    // Daí nós vê se um desses se bate

    // Caso simples:
    vector<int> vone, vtwo;
    for(int i = 0; i < 4; i++) {
        int in;
        cin >> in;
        vone.push_back(in);
    }
    for(int i = 0; i < 4; i++) {
        int in;
        cin >> in;
        vtwo.push_back(in);
    } // já armazenados...

    int pontos;
    for(int i = 0; i < 4; i++){
        if (vone[i] == vtwo[i]) pontos++;
    }

    if (pontos == 4) {
        cout << "1"; // todos os pontos iguais
        return 0;
    }
       
    if (vone[2] > vtwo[1] && vone[2] <= vtwo[2]) {
        cout << "1";
        return 0;
    }  // se vone[2] tá entre vtwo [1 e 2] (casos obvios)

    cout << "0";

    return 0;
}