#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        if (i == 0 || i == 1) {
            a[i] = 1;
        }
        else {
            a[i] = a[i - 1] + a[i - 2];
        }
    }
    cout << a[n - 1];
}