#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b - c == 1 || c - b == 1) {
        cout << 0;
    }
    else {
        if (a % 2 == 0) {
            if (b < c) {
                if ((c - b - 1) <= (a - 2 - (c - b - 1))) {
                    cout << c - b - 1;
                }
                else {
                    cout << (a - 2 - (c - b - 1));
                }
            }
            else {
                if ((b - c - 1) <= (a - 2 - (b - c - 1))) {
                    cout << b - c - 1;
                }
                else {
                    cout << (a - 2 - (b - c - 1));
                }
            }
        }
        else {
            if (b < c) {
                if ((c - b - 1) < (a - 2 - (c - b - 1))) {
                    cout << c - b - 1;
                }
                else {
                    cout << (a - 2 - (c - b - 1));
                }
            }
            else {
                if ((b - c - 1) < (a - 2 - (b - c - 1))) {
                    cout << b - c - 1;
                }
                else {
                    cout << (a - 2 - (b - c - 1));
                }
            }
        }
    }
    return 0;
}