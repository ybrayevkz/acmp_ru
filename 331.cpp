#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a, b;
    a = stoi(s.substr(0, 2));
    b = stoi(s.substr(3, 2));
    int x, y;
    cin >> x >> y;
    int summin = 0;
    if (b + y >= 60) {
        b = (b + y) % 60;
        summin = summin + 1;
    }
    else {
        b = b + y;
    }
    if (a + x + summin < 24) {
        a = a + x;
    }
    else {
        a = (a + x + summin) % 24;
    }
    if (a < 10) {
        cout << '0' << a << ':';
    }
    else {
        cout << a << ':';
    }
    if (b < 10) {
        cout << '0' << b;
    }
    else {
        cout << b;
    }
}