#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int d = (x * z * 2) + (y * z * 2);
    if (d < 16) {
        cout << 1;
    }
    else {
        if (d % 16 == 0) {
            cout << d / 16;
        }
        else {
            cout << (d / 16) + 1;
        }
    }
}