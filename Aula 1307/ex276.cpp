#include <iostream>
#include <vector>

using namespace std;

int main() {
    // pegar as partidas
    // pegar times
    vector<char> times;
    for(char c = 'A'; c <= 'P'; c++) {
        times.push_back(c);
    }


    for(int i = 0; i < 15; i++) {
        int m, n;
        cin >> m >> n;

        // O jogo atual é disputado entre os dois primeiros times da lista
        char time1 = times[0];
        char time2 = times[1];

        // Apagamos os dois times que acabaram de jogar do início da lista
        times.erase(times.begin());
        times.erase(times.begin());

        // O vencedor é colocado no FINAL da lista para jogar a próxima fase
        if (m > n) {
            times.push_back(time1);
        } else {
            times.push_back(time2);
        }
    }
    cout << times[0];
    return 0;
}