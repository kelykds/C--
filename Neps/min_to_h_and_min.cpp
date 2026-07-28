#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, hours, minutes;
    cin >> m;
    
    hours = m / 60;
    minutes = m % 60; // bem mais legal

    cout << hours << "\n" << minutes;


    return 0; // complexidade O(1) ?? São 5 operações para qualquer n
}