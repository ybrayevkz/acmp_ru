#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;
    if (a <= b && a <= c) {
        min = a;
    }
    if (b <= a && b <= c) {
        min = b;
    }
    if (c <= a && c <= b) {
        min = c;
    }
    if (a <= b && c <= b) {
        max = b;
    }
    if (c <= a && b <= a) {
        max = a;
    }
    if (a <= c && b <= c) {
        max = c;
    }
    cout << max - min;
}