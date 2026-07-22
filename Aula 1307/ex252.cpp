#include <iostream>
#include <set>

using namespace std;

int main() {

    int num;
    cin >> num;

    set<int> s;

    for(int i = 0; i < num; i++) {
        int indice;
        cin >> indice;
        s.insert(indice);
    }

    cout << s.size();
    
    return 0;
}