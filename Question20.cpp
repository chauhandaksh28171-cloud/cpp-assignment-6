// Q20. Write a program to search the largest element in a sorted array using Binary Search.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Array size must be positive.\n";
        return 0;
    }

    int a[n];
    cout << "Enter elements in ascending order: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (a[mid] <= a[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }

    cout << "Largest element = " << a[left] << '\n';
    return 0;
}
