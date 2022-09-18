#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c;
	a = n / 6;
	c = n / 6;
	b = (a + c) * 2;
	cout << a << " " << b << " " << c;
}