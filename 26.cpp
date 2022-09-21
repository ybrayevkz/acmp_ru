#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    if (r1 <= d + r2 && r2 <= d + r1 && r1 + r2 >= d) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}


