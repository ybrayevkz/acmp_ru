#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int s = a * b;
    long double d = sqrt(s);
    long long int c = (int)d;
    if (d - c == 0) {
        cout << fixed << setprecision(0) << sqrt(s);
    }
    else {
        cout << 0;
    }
}