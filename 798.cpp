#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{

    long long int m, n, i, j, c;
    cin >> m >> n >> i >> j >> c;
    if ((m * n) % 2 == 0) {
        cout << "equal";
    }
    else {
        if ((i + j) % 2 == 0 && c == 0) {
            cout << "black";
        }
        else if ((i + j) % 2 == 0 && c == 1) {
            cout << "white";
        }
        else if ((i + j) % 2 != 0 && c == 0) {
            cout << "white";
        }
        else {
            cout << "black";
        }
    }
    return 0;
}