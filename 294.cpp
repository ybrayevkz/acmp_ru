#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int a = (((a1 * b1) / 100) * c1) + (((a2 * b2) / 100) * c2);
    if ((a1 - (a1 * b1) / 100) < (a2 - (a2 * b2) / 100)) {
        cout << a + (((a2 - (a2 * b2) / 100) - (a1 - (a1 * b1) / 100)) * c2);
    }
    else if ((a1 - (a1 * b1) / 100) == (a2 - (a2 * b2) / 100)) {
        cout << a + 0;
    }
    else {
        cout << a + (((a1 - (a1 * b1) / 100) - (a2 - (a2 * b2) / 100)) * c1);
    }
}