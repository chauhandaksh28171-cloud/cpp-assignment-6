// Question 10: Write a program to multiply two matrices.

#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2, a[10][10], b[10][10], p[10][10] = {};
    cin >> r1 >> c1 >> r2 >> c2;
    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10 || c1 != r2) return 1;
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) cin >> a[i][j];
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) cin >> b[i][j];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++) p[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) cout << p[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
