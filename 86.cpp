#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 0;
    }
    else {
        cout << n * (n - 1) - (2 * (n - 1));
    }
}