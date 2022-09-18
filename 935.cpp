#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a < 1 || b < 1 || c < 1 || d < 1) || (a > 8 || b > 8 || c > 8 || d > 8)) {
        cout << "NO";
    }
    else {
        if ((a + b) % 2 == (c + d) % 2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }

}