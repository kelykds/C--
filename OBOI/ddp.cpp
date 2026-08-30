// Xxk4odL
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N, v1, d1, v2, d2;
    cin >> N >> v1 >> v2 >> d1 >> d2;


    int restam1 = N - (v1 + d1);
    int restam2 = N - (v2 + d2);


    int max_gols1 = v1 + restam1;
    int max_gols2 = v2 + restam2;

   
    if (max_gols1 > v2) {
        cout << "S\n";
    } else {
        cout << "N";
    }

    
    if (max_gols2 > v1) {
        cout << "S\n";
    } else {
        cout << "N";
    }

    return 0;
}