// Question 16: Write a program to count the number of occurrences of a given element in an array (Linear Search).

#include <iostream>
using namespace std;
int main() {
    int n, a[100], key, count = 0;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for (int i = 0; i < n; i++) if (a[i] == key) count++;
    cout << "Occurrences = " << count;
    return 0;
}
