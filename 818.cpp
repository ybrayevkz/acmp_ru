#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100000];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << a[0];
    }
    else {
        for (int i = 0; i < n; i++) {
            sum = sum + a[i];
        }
        cout << sum - (n - 1);
    }

}