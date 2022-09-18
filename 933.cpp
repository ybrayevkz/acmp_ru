#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c, t;
    cin >> a >> b >> c >> t;
    if (a == t) {
        cout << a * b;
    }
    else if (a < t) {
        cout << (a * b) + ((t - a) * c);
    }
    else {
        cout << t * b;
    }
}