#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int a = 0;
    cin >> n;
    for (int i = 1; i <= 1000000; i++) {
        if (i <= n) {
            n = n - i;
            a = a + 1;
        }
        else {
            break;
        }
    }
    cout << a;

}