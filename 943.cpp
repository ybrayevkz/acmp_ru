#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (x % 2 == 1) {
        cout << ((m * x) - 1) - (m - y);
    }
    else {
        cout << ((m * x) - m) + (m - y);
    }
}