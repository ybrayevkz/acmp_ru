#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long int a[1000];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        for (int j = x; j <= y; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}