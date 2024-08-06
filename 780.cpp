#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	while (n > 0){
	    n = n - i;
	    i = i + 1;
	}
	cout << i - 1;
	return 0;
}