#include <iostream> //bib autoexplicativa dnv?
#include <queue> // aparentemente

using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2); // mema coisa
    q.push(3);

    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n"; 

    // Queue é linear

    return 0;
}