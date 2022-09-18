#include <iostream>
#include <string>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    a = a / 2;
    b = b / 6;
    c = c / 1;
    if (a <= b && a <= c) {
        cout << a;
    }
    else if (b <= a && b <= c) {
        cout << b;
    }
    else {
        cout << c;
    }
}