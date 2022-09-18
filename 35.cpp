#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int m[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << 19 * m[i][1] + ((m[i][0] + 239) * (m[i][0] + 366) / 2) << endl;
    }
}