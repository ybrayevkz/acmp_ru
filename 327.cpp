#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        int a = stoi(str.substr(0, 1));
        int b = stoi(str.substr(1, 1));
        int c = stoi(str.substr(2, 1));
        int doo = stoi(str.substr(3, 3)) - 1;
        int posle = stoi(str.substr(3, 3)) + 1;
        int a1 = doo / 100;
        int b1 = (doo % 100) / 10;
        int c1 = doo % 10;
        int a2 = posle / 100;
        int b2 = (posle % 100) / 10;
        int c2 = posle % 10;
        if ((a + b + c) == (a1 + b1 + c1) || (a + b + c) == (a2 + b2 + c2)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}