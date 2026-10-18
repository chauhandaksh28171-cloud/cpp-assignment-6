// Question 3: Write a program to find the maximum and minimum element in a 1D array.

#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxVal = a[0], minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) maxVal = a[i];
        if (a[i] < minVal) minVal = a[i];
    }
    cout << "Maximum = " << maxVal << "\nMinimum = " << minVal;
    return 0;
}
