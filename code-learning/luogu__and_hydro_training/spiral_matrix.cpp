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


/*方法2#include <stdio.h>
int main() {
    int a[10][10];

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

    int r = 0;
    int c = n - 1;
    int k = 1;
    a[r][c] = k++;

    while (k <= n * n) {
        // 下
        while (r + 1 < n && a[r + 1][c] == 0) {
            a[++r][c] = k++;
        }
        // 左
        while (c - 1 >= 0 && a[r][c - 1] == 0) {
            a[r][--c] = k++;
        }
        // 上
        while (r - 1 >= 0 && a[r - 1][c] == 0) {
            a[--r][c] = k++;
        }
        // 右
        k = k;
        while (c + 1 < n && a[r][c + 1] == 0) {
            a[r][++c] = k++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/