#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 3 || n == 4 || n == 5) {
        cout << "Spring";
    }
    else if (n == 6 || n == 7 || n == 8) {
        cout << "Summer";
    }
    else if (n == 9 || n == 10 || n == 11) {
        cout << "Autumn";
    }
    else if (n == 12 || n == 1 || n == 2) {
        cout << "Winter";
    }
    else {
        cout << "Error";
    }
}