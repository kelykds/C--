// Xxk4odL
#include <bits/stdc++.h>
using namespace std; 

int main() {
     
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;

    string s;
    cin >> s;

    int soma = 0;
    int intervalos = 0;
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            soma += 1;
        } else {
            soma -= 1;
        }
        intervalos += freq[soma];

        freq[soma]++;
    }

    cout << intervalos;

}