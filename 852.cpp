#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (a == 0 && b > 0) {
        cout << "Impossible";
    }
    else if (b == 0) {
        cout << a << " " << a;
    }
    else if (a > b) {
        cout << a << ' ' << a + b - 1;
    }
    else {
        cout << b << ' ' << a + b - 1;
    }
    return 0;
}