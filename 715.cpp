#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n, m;
    char a[100][100];
    char b[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    int counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == b[i][j]) {
                counter = counter + 1;
            }
            else {
                continue;
            }
        }
    }

    cout << counter;

    return 0;
}