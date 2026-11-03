#include <stdio.h>
int main1()
{int
a[4]={ 9,8 , 6 ,7};
int n=3;
//core
for (int i = 0; i < n; i++)//遍历所有数
{
    for (int j = i-1; j < n; j++)//单个数冒泡
    {
        if (a[j]>a[j+1])//判断大小
        {
            int temp = a[j];
            a[j]= a[j+1];
            a[j+1]=temp;//交换位置
        }   
    }   
}
    return 0;
}//冒泡排序



int main0()
{
    int a[4] = {0, 9, 3, 5};
    int b[4] = {0};
    int n = 4;
    //core
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
// 插入排序