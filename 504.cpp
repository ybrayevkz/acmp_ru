#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s = "GCV";
    for (int i = 0; i < n; i++) {
        swap(s[1], s[2]);
        swap(s[1], s[0]);
    }
    cout << s;
}