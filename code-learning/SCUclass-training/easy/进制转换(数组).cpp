#include <bits/stdc++.h>
int main()
{
    long long a;
    int b, print, n;
    int c[10000];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        int j = 0;
        for (; a != 0;)
        {
            print = a % b;
            j++;
            a = (a - a % b) / b;
            c[j] = print;
        }
        for (; j > 0; j--)
        {
            printf("%d", c[j]);
        }

        printf("\n");
    }

    // 循环
    //  a%b=print  a-a%b/b = a
    //  \n
    return 0;
}