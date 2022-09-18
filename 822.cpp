#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double s = fabs(1.0 * (x2 - x1) * (y3 - y1) - 1.0 * (x3 - x1) * (y2 - y1)) / 2.;
	cout << fixed << s;
}