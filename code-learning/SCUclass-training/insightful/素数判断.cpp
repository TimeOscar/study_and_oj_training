#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n); // 有n组数据

    for (int i = 0; i < n; i++)
    {
        int statue = 0;
        int x;
        scanf("%d", &x);
        if (x <= 1)
        {
            statue = 1;
        }
        // 单独排除小于等于 1 的数
        if (x >= 4)
        {
            for (int j = 2; j <= x / j; j++)
            {
                if (x % j == 0)
                {
                    statue = 1;
                    break;
                }
            }
        } // 试除法
        if (statue == 1)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }

    return 0;
}

//使用标记变量的思想