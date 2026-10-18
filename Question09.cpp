// Question 9: Write a program to subtract two matrices.

#include <iostream>
using namespace std;
int main() {
    int r, c, a[10][10], b[10][10];
    cin >> r >> c;
    if (r < 1 || r > 10 || c < 1 || c > 10) return 1;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> a[i][j];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> b[i][j];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << a[i][j] - b[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
