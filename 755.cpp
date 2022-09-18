#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b - c >= 0) {
        cout << a + b - c;
    }
    else {
        cout << "Impossible";
    }
}