#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int x, y, z;
    x = 1;
    y = 0;
    z = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A') {
            if (x > y) {
                x = x - 1;
                y = y + 1;
            }
            else if (x < y) {
                y = y - 1;
                x = x + 1;
            }
            else {
                y = y;
                x = x;
            }
        }
        else if (str[i] == 'B') {
            if (z > y) {
                z = z - 1;
                y = y + 1;
            }
            else if (z < y) {
                y = y - 1;
                z = z + 1;
            }
            else {
                y = y;
                z = z;
            }
        }
        else if (str[i] == 'C') {
            if (x > z) {
                x = x - 1;
                z = z + 1;
            }
            else if (x < z) {
                z = z - 1;
                x = x + 1;
            }
            else {
                x = x;
                z = z;
            }
        }
    }
    if (x > y && x > z) {
        cout << 1;
    }
    else if (y > x && y > z) {
        cout << 2;
    }
    else if (z > x && z > y) {
        cout << 3;
    }
}