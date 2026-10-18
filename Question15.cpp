// Question 15: Write a program to search an element in a 1D array using Binary Search.

#include <iostream>
using namespace std;
int main() {
    int n, a[100], key;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i]; // Enter in ascending order.
    cin >> key;
    int l = 0, r = n - 1, pos = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == key) { pos = m; break; }
        if (a[m] < key) l = m + 1; else r = m - 1;
    }
    if (pos == -1) cout << "Not found";
    else cout << "Found at position " << pos + 1;
    return 0;
}
