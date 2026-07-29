#include <bits/stdc++.h>

using namespace std;

int main() {

    // até 50 caracteres
  string seq;
  getline(cin, seq);

  vector<char> v;
  bool iguais = true; // ponteiros??
  int l = 0, r = v.size() - 1;    
  // jeito mais paia mas pelo menos é o que eu consigo: colocar cada caractere em um vetor, dar popback no que for consoante e ver se o inverso vai

    
  for (int i = 0; i < int(seq.size()); i++) {
        if (seq[i] == 'a' || seq[i] == 'e' || seq[i] == 'i' || seq[i] == 'o' || seq[i] == 'u') v.push_back(seq[i]);
  }

  while (l < r) {
    if (v[l] != v[r]) {
      iguais = false;
      break;
    }
    l++;
    r--;
  }
  
  return 0;
}
