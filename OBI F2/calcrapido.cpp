#include <bits/stdc++.h>

using namespace std;

int main() {

    int s, a, b;
    cin >> s >> a >> b;

    int n = 0;
    for (int i = a; i <= b; i++) {
        if (b < 10) {
            if (i == s) n++;
        }

        else if (b < 100) {
            if (i < 10) {
                if (i == s) n++;
            }
            else {
                if (i % 10 + i / 10 == s) n++;
            }
        } // esse tá ok

        else if (b < 1000) {
            if (i < 10) {
                if (i == s) n++;
            }
            else if (i < 100) {
                if (i % 10 + i / 10 == s) n++;
            }
            else {
                if (i % 100 + i % 10 + i / 100 == s) n++; 
            } 
        } 
        else if (b < 10000) {
            if (i < 10) {
                if (i == s) n++;
            }
            else if (i < 100) {
                if (i % 10 + i / 10 == s) n++;
            }
            else if (i < 1000) {
                if (i % 100 + i % 10 + i / 100 == s) n++; 
            } 
            else if (i < 10000) {
                if (i % 1000 + i % 100 + i % 10 + i / 1000 == s);
            }
        }
        else if (b == 10000){
            if (i < 10) {
                if (i == s) n++;
            }
            else if (i < 100) {
                if (i % 10 + i / 10 == s) n++;
            }
            else if (i < 1000) {
                if (i % 100 + i % 10 + i / 100 == s) n++; 
            } 
            else if (i < 10000) {
                if (i % 1000 + i % 100 + i % 10 + i / 1000 == s) n++;
            }
            else if (i == 10000) {
                if (s == 1) n++;
            }
        }
    }

    cout << n;

    return 0;
}

// Código gigante ne?
