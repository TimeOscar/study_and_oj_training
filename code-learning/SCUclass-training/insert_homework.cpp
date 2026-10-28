#include <stdio.h>
// 1 2 3 4
//  3
//  1 3
//

int main()
{
    int a[10000];
    int b[10000] = {0};
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    b[0] = a[0];
    printf("%d\n",a[0]);
    // 插入排序
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j >= 0 && b[j] > a[i])
        {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = a[i];
        for (int h = 0; h <= i; h++)
        {
           
                printf("%d ", b[h]);
    
        }
        printf("\n");
    }

    return 0;
}
// 先写最简单的排序算法，然后再对这种算法进行特殊题目化改造，这似乎是一个好方法。
