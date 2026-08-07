#include <bits/stdc++.h>

using namespace std;

int contracao(int a, int b) {
    int soma = a + b;
    return soma;
} // fazer uma p verificação de palíndromos também??

bool palindromos(int a, int b) {
    if (a == b) return true;
    else return false;
};

int main() {

    int n;
    cin >> n;
    vector<int> p; // pareceu que ia dar certo mas nem

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        p.push_back(k);
    }

    bool palindrome = false;
    int cq = 0; // um while aqui caberia?

    while (!(palindrome)) {
        for (int i = 0; i < n / 2; i++) { // acho que vou ter que verificar se p[i] < que p[]
            if (p[i] != p[n-i-1]) {
                if (p[i] > p[n-i-1]) {
                    int m;
                    palindrome = false;
                    m = contracao(p[n-i-1], p[n-i-2]);
                    cq++;
                    p.pop_back();
                    p.pop_back();
                    p.push_back(m);
                }
                else { // de início parece uma boa lógica...
                    int m;
                    palindrome = false;
                    m = contracao(p[i], p[i+1]);
                    cq++;
                    p.erase(p.cbegin());
                    p[i] = m;
                }
            }
            else palindrome = true;
        }
    }

    cout << cq;

    return 0;
} // deveria ser two pointers....