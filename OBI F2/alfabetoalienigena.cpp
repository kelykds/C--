#include <bits/stdc++.h>

using namespace std;

int main() {

    int K, N;
    cin >> K >> N;

    vector<char> v(K);

    for(int i = 0; i < K; i++) {
        cin >> v[i];
    }    

    for (int i = 0; i < N; i++) {
        char k;
        cin >> k;
        int p = 0;
        for (int j = 0; j < K; j++) {
            if (k == v[i]) p++;
        }
        
        if (p == 0) {
            cout << "N";
            return 0;
        }
    }
    cout << "S";

    return 0;
}
