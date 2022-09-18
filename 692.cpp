#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = log2(n);
    if ((log2(n) * 10) - (a * 10) == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}