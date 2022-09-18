#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int m[3], n[3];
    m[0] = a;
    m[1] = b;
    m[2] = c;
    n[0] = d;
    n[1] = e;
    n[2] = f;
    bubbleSort(m, 3);
    bubbleSort(n, 3);

    cout << (m[0] * n[0]) + (m[1] * n[1]) + (m[2] * n[2]) << endl;


}