#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[105][105];
  int n, i, j;
  cin >> n >> i >> j;
  int up = 0, down = n - 1, left = 0, right = n - 1, num = 1;

  while (up <= down && left <= right) {

    for (int j = left; j <= right; j++) {
      a[up][j] = num++;
    }
    up++; // 上边界收缩
    for (int j = up; j <= down; j++) {
      a[j][right] = num++;
    } // 从上到下
    right--;
    if (up <= down) {
      for (int j = right; j >= left; j--) {
        a[down][j] = num++;
      }
      down--;
    }
    if (left <= right) {
      for (int j = down; j >= up; j--) {
        a[j][left] = num++;
      }
      left++;
    }
  }
  cout << a[i - 1][j - 1] << endl;
  return 0;
}