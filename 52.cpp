#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    string str1 = s.substr(0, 3);
    string str2 = s.substr(3, 3);
    int a = stoi(str1);
    int b = stoi(str2);
    if ((a / 100) + (a % 100) / 10 + (a % 10) == (b / 100) + (b % 100) / 10 + (b % 10)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}