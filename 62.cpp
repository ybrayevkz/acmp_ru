#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int chartoint(char c) {
    string s = "ABCDEFGH";
    int a;
    for (int i = 0; i < 8; i++) {
        if (c == s[i]) {
            a = i;
            break;
        }
    }
    return a;
}
int main() {
    string str;
    cin >> str;
    char c = str[0];
    int a = chartoint(c) + 1;
    int b = stoi(str.substr(1, 1));
    if ((a + b) % 2 == 0) {
        cout << "BLACK";
    }
    else {
        cout << "WHITE";
    }
}