#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    int i = 1;
    int evenmax = -10000;
    int oddmin = 10000;
	while(cin >> x){
	    if(i % 2 != 0){
	        if(x <= oddmin){
	            oddmin = x;
	        }
	        else{
	            oddmin = oddmin;
	        }
	    }
	    else{
	        if(x >= evenmax){
	            evenmax = x;
	        }
	        else{
	            evenmax = evenmax;
	        }
	    }
	    i = i + 1;
	}
	cout << evenmax + oddmin;
	return 0;
}