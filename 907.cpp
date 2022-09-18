#include <iostream>
#include <string>
using namespace std;

int main() {
    int w, h, r;
    cin >> w >> h >> r;
    if ((r * 2) <= w && (r * 2) <= h) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}