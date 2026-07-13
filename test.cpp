#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Counting from 0 to " << n << ":" << endl;

    int k = 0;
    while (k <= n) {
        cout << k << endl;
        k++;
    }
    cout << "Done!" << endl;
}