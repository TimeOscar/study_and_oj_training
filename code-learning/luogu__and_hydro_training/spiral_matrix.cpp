#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[105][105];
    int n, i,j;
    cin >> n>> i>> j ; int up = 0,
            down = n-1,
            left = 0,
            right = n-1
            ,num = 1;

    for (int k = 0; k < n / 2 + 1; k++)
    {

        for (int j = left; j <= right - left; j++)
        {
             a[up][j] = num ++;
        }
        up++; // 上边界收缩
        for (int j = up ; j <= down; j++)
        {
           a[j][right] = num ++;
        } // 从上到下
        right--;
        for (int j = right; j >=left; j--)
        {
             a[down][j] = num ++;
        }
        down--;
        for (int j = down; j >= up; j--)
        {
        a[j][left] = num ++;
        }
        left++;
    }
    cout <<a[i-1][j-1 ];
    return 0;
}