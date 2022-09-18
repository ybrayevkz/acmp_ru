#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n1, n2, n;
    cin >> n1 >> n2 >> n;
    if (n == 1) {
        cout << n1;
    }
    else if (n == 2) {
        cout << n2;
    }
    else {
        int d = n2 - n1;
        int d1 = n1 - n2;
        if (d > 0) {
            for (int i = 3; i <= n; i++) {
                n2 = n2 + d;
            }
            cout << n2;
        }
        else if (d < 0) {
            for (int i = 3; i <= n; i++) {
                n2 = n2 - d1;
            }
            cout << n2;
        }
        else {
            cout << n2;
        }
    }
}