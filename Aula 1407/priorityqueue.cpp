#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int>superfila;
    superfila.push(5);

    cout << superfila.top() << endl; // Inclui busca binária :) (complexidade logn)
    superfila.push(9);
    cout << superfila.top();
}