#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < 94 || a > 727 || b < 94 || b > 727 || c < 94 || c > 727) {
        cout << "Error";
    }
    else {
        if (a >= b && a >= c) {
            cout << a;
        }
        else if (b >= a && b >= c) {
            cout << b;
        }
        else if (c >= a && c >= b) {
            cout << c;
        }
    }
}