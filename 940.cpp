#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n - 1; i++) {
        cout << str[i];
    }
    for (int i = n; i < str.length(); i++) {
        cout << str[i];
    }
}