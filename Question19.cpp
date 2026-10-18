// Question 19: Write a program to implement Binary Search for an array of floating-point numbers.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double a[100], key;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i]; // Enter in ascending order.
    cin >> key;
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (fabs(a[m] - key) < 1e-9) { cout << "Found at position " << m + 1; return 0; }
        if (a[m] < key) l = m + 1; else r = m - 1;
    }
    cout << "Not found";
    return 0;
}
