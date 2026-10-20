#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n); // 有n组数据

    for (int i = 0; i < n; i++)
    {int statue = 0;
        int x;
        scanf("%d", &x);
        if (x <= 1 )
        {
            statue = 0;
        }
        if ( x == 2 || x == 3)
        {
            statue = 0;
        }//单独判断1
        if(x>=4){
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                statue = 1;
            }
        }}//试除法
        // otput
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