#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    if (s == "freeze") {
        if (a <= b) {
            cout << a;
        }
        else {
            cout << b;
        }
    }
    else if (s == "heat") {
        if (a >= b) {
            cout << a;
        }
        else {
            cout << b;
        }
    }
    else if (s == "auto") {
        cout << b;
    }
    else {
        cout << a;
    }
}