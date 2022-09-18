#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    cout << sum;
}