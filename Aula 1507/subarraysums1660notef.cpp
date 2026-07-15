#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector<int> v;

    for(int i =0; i<n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    int resp = 0;

    for(int i = 0; i < n; i++) {
        long long sum;
        for(int j = 0; j < n; j++) {
            sum += v[j];
            if(sum==x) resp ++;
        }
    }

    cout << resp << "\n"; // complexidade O(n²)

    return 0;
}