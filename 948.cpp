#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x, y;
    if (a >= b) {
        x = 1;
        y = b;
    }
    else if (a < b && b % a != 0) {
        x = (b / a) + 1;
        y = b % a;
    }
    else {
        x = (b / a);
        y = a;
    }
    cout << x << " " << y;
}