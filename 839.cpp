#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0') {
            continue;
        }
        else {
            sum = sum + 1;
        }
    }
    if (sum == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}