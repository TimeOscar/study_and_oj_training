#include <stdio.h>
int a[10000] = {0};

int make(int n, int k, int m)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    } // 初始化1
    int idx = k - 1, left = n, cnt = 0;//位置从k开始（数组初始为0），剩余，计数器
    while (left > 2)
    {
        if (a[idx] == 1)
        {
            cnt++;//报数
            if (cnt == m)
            {
                a[idx] = 0;//剔除
                left--;
                cnt = 0;
            }
        }
        idx = (idx + 1) % n; // 放后面是为了避免漏掉1
    }

    return 0;
}

int main()
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    make(n, k, m);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==1)
        {
            printf("%d ",i+1);
        }
        
    }
    
    return 0;
}

//这个题给我的启发是思考比改格式写debug更重要，所以我一定要像做数学题一样先思考
//而且要深刻了解各种语法结构的特点，看自己能不能一下子写对。