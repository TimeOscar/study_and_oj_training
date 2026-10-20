#include <stdio.h>
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
}