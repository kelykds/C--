#include <bits/stdc++.h>

using namespace std;

int main() {
  string vogais = "";

// 1. Pega só as vogais
  for (char c : seq) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        vogais += c;
    }
  }

// 2. Cria uma cópia e inverte
  string rev = vogais;
  reverse(rev.begin(), rev.end());

// 3. Se for igual ao inverso, é palíndromo!
  if (vogais == rev) cout << "S\n";
  else cout << "N\n";
  return 0;
}
