#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 10 && n <= 55 && n % 8 != 1 && n % 8 != 0) {
        cout << n - 8 << " " << n - 1 << " " << n + 1 << " " << n + 8;
    }
    if (n <= 8 && n % 8 != 1 && n % 8 != 0) {
        cout << n - 1 << " " << n + 1 << " " << n + 8;
    }
    if (n >= 57 && n % 8 != 1 && n % 8 != 0) {
        cout << n - 8 << " " << n - 1 << " " << n + 1;
    }
    if (n % 8 == 1 && n >= 9 && n < 57) {
        cout << n - 8 << " " << n + 1 << " " << n + 8;
    }
    if (n % 8 == 0 && n >= 16 && n < 64) {
        cout << n - 8 << " " << n - 1 << " " << n + 8;
    }
    if (n == 1) {
        cout << n + 1 << " " << n + 8;
    }
    if (n == 8) {
        cout << n - 1 << " " << n + 8;
    }
    if (n == 57) {
        cout << n - 8 << " " << n + 1;
    }
    if (n == 64) {
        cout << n - 8 << " " << n - 1;
    }
    return 0;
}