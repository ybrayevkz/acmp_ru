#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	double x;
	cin >> x;
	double sum = 0;
	double i = 1;
	while (true) {
		sum = sum + 1/(1 + i);
		i = i + 1;
		if(sum >= x) {
			break;
		}
		else {
			continue;
		}
	}
	cout << i - 1 << " " << "card(s)";
	return 0;
}