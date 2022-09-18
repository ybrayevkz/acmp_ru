#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[10000];
    int sum = 0;
    int avar;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 437) {
            sum = sum + 0;
        }
        else {
            sum = sum + 1;
            avar = i;
            break;
        }
    }
    if (sum == 0) {
        cout << "No crash";
    }
    else {
        cout << "Crash" << " " << avar + 1;
    }
}