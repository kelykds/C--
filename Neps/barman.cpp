#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, cq;
    cin >> num;

    cq = 0;

    for (int i = 0; i < num; i++) {
        int l, c; 
        cin >> l >> c;

        if (l > c) cq += c; // se a quantidade de latas for maior que a de copos, soma os copos ao cq
    }

    cout << cq;

    return 0; // complexidade O(n) pq vai rodar o for num vezes
}