#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (i + j == a && i * j == b) {
                x = i;
                y = j;
            }
        }
    }
    if (x > y) {
        cout << y << ' ' << x;
    }
    else {
        cout << x << ' ' << y;
    }
}