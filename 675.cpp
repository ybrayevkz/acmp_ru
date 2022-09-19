#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    char a[100][100];
    int counter = 0;
    int min = m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.') {
                counter = counter + 1;
            }
            else {
                continue;
            }
        }
        if (counter < min) {
            min = counter;
        }
        counter = 0;
    }
    cout << min << endl;
    return 0;
}


