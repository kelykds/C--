// Xxk4odL

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v1, v2, d1, d2;
    cin >> n >> v1 >> v2 >> d1 >> d2;

    int restam1 = n - (v1+d1);
    int restam2 = n - (v2+d2);

    int maxgols1 = restam1 + v1;
    int maxgols2 = restam2 + v2;

    if (maxgols1 == maxgols2) {
        cout << "S" << "\n" << "S";
        return 0;
    } 
    else if (maxgols1 > maxgols2) {
        cout << "S" << "\n" << "N";
        return 0;
    }
    else {
        cout << "N" << "\n" << "S";
        return 0;
    }

    return 0;
}