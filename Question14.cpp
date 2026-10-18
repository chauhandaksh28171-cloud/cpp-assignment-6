// Question 14: Write a program to search an element in a 1D array using Linear Search.

#include <iostream>
using namespace std;
int main() {
    int n, a[100], key, pos = -1;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for (int i = 0; i < n; i++)
        if (a[i] == key) { pos = i; break; }
    if (pos == -1) cout << "Not found";
    else cout << "Found at position " << pos + 1;
    return 0;
}
