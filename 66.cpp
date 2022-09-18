#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s = "qwertyuiopasdfghjklzxcvbnm";
    char a;
    cin >> a;
    for (int i = 0; i < 26; i++) {
        if (a == s[i] && a != 'm') {
            cout << s[i + 1];
            break;
        }
        if (a == 'm') {
            cout << 'q';
            break;
        }
    }
}