#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> s;
	cin >> n;
	if(n == 1){
	    cout << "Yes";
	}
	else if (s == "School" && n % 2 == 0){
	    cout << "No";
	}
	else{
	    cout << "Yes";
	}
	return 0;
}