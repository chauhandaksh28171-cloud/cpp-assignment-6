// Question 2: Write a program to find the sum of all elements in a 1D array.

#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    long long sum = 0;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) { cin >> a[i]; sum += a[i]; }
    cout << "Sum = " << sum;
    return 0;
}
