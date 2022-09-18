#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    string sr = to_string(n);
    reverse(s.begin(), s.end());
    if (s == sr) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}