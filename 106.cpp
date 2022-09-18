#include <iostream>
using namespace std;

int main() {
    int n;
    int m[100];
    int a = 0;
    int b = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++) {
        if (m[i] == 0) {
            a = a + 1;
        }
        else {
            b = b + 1;
        }
    }
    if (a >= b) {
        cout << b;
    }
    else {
        cout << a;
    }
}