#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num; 
    cin >> num;

    int p, m;
    vector<int> tamsp, tamsm;

    for (int i = 0; i < num; i++) {
        int tam;
        cin >> tam;
        if(tam == 1) tamsp.push_back(tam);
        else tamsm.push_back(tam);
    }

    cin >> p >> m;
    if (p < tamsp.size()) cout << "N";
    else if (m < tamsm.size()) cout << "N";
    else cout << "S";

    return 0;
}