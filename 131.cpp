#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    int max = 0;
    int flag;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (b == 1) {
            if (a > max) {
                max = a;
                flag = i + 1;
            }
            counter++;
        }
        else {
            continue;
        }
    }
    if (counter < 1) {
        cout << -1;
    }
    else {
        cout << flag;
    }

}