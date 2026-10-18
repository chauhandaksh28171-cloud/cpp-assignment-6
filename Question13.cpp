// Question 13: Write a program to sort names of students using Bubble Sort.

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string names[50];
    cin >> n;
    if (n < 1 || n > 50) return 1;
    cin.ignore(10000, '\n');
    for (int i = 0; i < n; i++) getline(cin, names[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (names[j] > names[j + 1]) {
                string t = names[j]; names[j] = names[j + 1]; names[j + 1] = t;
            }
    for (int i = 0; i < n; i++) cout << names[i] << '\n';
    return 0;
}
