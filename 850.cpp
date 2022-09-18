#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int min, max;
    if (a <= b) {
        max = a / 1;
    }
    else {
        max = b / 1;
    }
    if (a <= b) {
        if (b % 2 == 0) {
            min = b / 2;
        }
        else {
            min = (b / 2) + 1;
        }
    }
    else {
        if (a % 2 == 0) {
            min = a / 2;
        }
        else {
            min = (a / 2) + 1;
        }
    }
    cout << min << " " << max;
}