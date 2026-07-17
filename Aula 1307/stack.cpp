#include <iostream>
#include <stack> // bib do stack 

using namespace std;

int main() {
    stack<int> s; // Declaração (tudo linear nas operações de pilha)

    s.push(1); // insere 1 no topo
    s.push(2); // insere 2 no topo
    s.push(3); // insere 3 no topo

    cout << s.top() << endl; // imprime 3
    s.pop(); // remove 3 do topo
    cout << s.top() << endl; // agora é 2

    // Stack é linear

    return 0;
}