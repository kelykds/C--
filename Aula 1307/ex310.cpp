#include <iostream>

using namespace std;

int main() {

    int ax0, ay0, ax1, ay1;
    int bx0, by0, bx1, by1;

    cin >> ax0 >> ay0 >> ax1 >> ay1;
    cin >> bx0 >> by0 >> bx1 >> by1;

    if(ax1 < bx0 || ax0 > bx1 || ay1 < by0 || ay0 > by1) {
        cout << 0;
    } else {
        cout << 1;
    }

    return 0;
}