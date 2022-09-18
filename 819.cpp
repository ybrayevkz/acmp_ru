#include <iostream>
#include <string>
using namespace std;
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	cout << (a * b * 2) + (a * c * 2) + (b * c * 2) << " " << a * b * c;
}