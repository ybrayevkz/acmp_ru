#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	double a, b;
	cin >> a >> b;
	double pi = acos(-1.0);
	double so = pi * pow(b, 2);
	double sm = so - a;
	cout << fixed << setprecision(3) << sqrt(sm / pi);
}