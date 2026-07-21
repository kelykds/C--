#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string resto;
    getline(cin, resto); // Descarta o '\n' que sobrou da leitura do 'n'

    int saldo = 0;
    bool ok = true;

    for(int i = 0; i < n; i++){
        string lin;
        getline(cin, lin);
        if(!ok) continue; // se ja deu erro, não precisa continuar ne

        for(char c : lin) { // para um caractere em lin
            if (c == '{') {
                saldo++;
            } else if (c == '}') {
                saldo--;
                if(saldo < 0) {
                    ok = false;
                }
            }
        }
    }
    if (ok && saldo == 0) {
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}