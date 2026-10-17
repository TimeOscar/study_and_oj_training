#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int n, a[1005];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // 数组的输入
    }
    int b[1005];
    do{
        memcpy(b, a, sizeof(a)); // 复制
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = b[0];//移动位置
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";//print
    }while ( a[n-1]!=n);
    return 0;
}