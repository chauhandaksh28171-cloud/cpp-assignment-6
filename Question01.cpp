// Question 1: Write a program to input and display elements of a 1D array.

#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
