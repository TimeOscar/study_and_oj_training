#include <stdio.h>
// 1 2 3 4
//  3
//  1 3
//

int main()
{
    int a[4] = {0, 9, 3, 5};
    int b[4] = {0};
    int n = 4;
    // 插入排序
    // for (int i = 0; i < n; i++)
    // {
    //     int j = i;
    //     while (j--)
    //     {
    //         if (a[i] <= b[j])
    //         {
    //             b[j + 1] = b[j];
    //         }else{
    //             b[j+1] = a[i];
    //             break;
    //         }
    //     }
    // }
     for (int i = 1; i < n; i++)  // 从第二个元素开始插入
    {
        int temp = a[i];         // 要插入的数
        int j = i - 1;           // 已排序区间的最后一个下标

        // 从后往前找位置，比 temp 大的都往后挪
        while (j >= 0 && b[j] > temp)
        {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = temp;         // 插入到空出来的位置
    }

    return 0;
}
//先写最简单的排序算法，然后再对这种算法进行特殊题目化改造，这似乎是一个好方法。
//if else 的判断确实容易把我搞昏，还是不能这么搞啊