#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 5) {
        cout << "25";
    }
    else {
        string s = to_string(n);
        s.pop_back();
        int num = stoi(s);
        cout << num * (num + 1);
        cout << "25";
    }
}