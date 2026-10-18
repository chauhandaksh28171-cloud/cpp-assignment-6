// Question 5: Write a program to input 10 numbers in an array and count how many are even and odd.

#include <iostream>
using namespace std;
int main() {
    int x, even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x % 2 == 0) even++; else odd++;
    }
    cout << "Even = " << even << "\nOdd = " << odd;
    return 0;
}
