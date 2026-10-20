#include <stdio.h>
int main()
{
    int x, n, y;
    scanf("%d%d", &x, &n);
    if (x <= 999 && x >= 100 && (n ==1 || n ==2 || n ==3) )
    {
        for (int i = 1; i < n; i++)
        {
            x = x / 10;
        }
        y = x % 10;
        {
            printf("%d\n", y );
        }
    }
    else
    {
        printf("illegal");
    }
    return 0;
}