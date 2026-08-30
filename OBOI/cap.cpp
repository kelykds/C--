#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<long long, long long> freq;
    
    long long soma = 0;
    long long total_intervalos = 0;

    
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            soma += 1;
        } else {
            soma -= 1;
        }
        total_intervalos += freq[soma];

        freq[soma]++;
    }

    cout << total_intervalos << "\n";

    return 0;
}