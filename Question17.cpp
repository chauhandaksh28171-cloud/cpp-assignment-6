// Question 17: Write a program to check if a given number is present in the array or not (Linear Search).

#include <iostream>
using namespace std;
int main() {
    int n, a[100], key;
    bool found = false;
    cin >> n;
    if (n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for (int i = 0; i < n; i++)
        if (a[i] == key) { found = true; break; }
    cout << (found ? "Present" : "Not present");
    return 0;
}
