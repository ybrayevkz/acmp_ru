#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[30000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << min << " " << max;
}