#include <stdio.h>
#include <string.h>
char a[505], b[505];
int mystrstr(char a[505], char b[505])
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    int cd = 0; // 状态机
    int i = 0;
    for (; i <= len_a - len_b; i++)
    {
        if (a[i] == b[0])
        {
            int h = i;
            cd = 1;
            for (int j = 0; j < len_b - 1;)//WRONG：B的长度在参数调试的时候看出来了
            {
                if (a[h] == b[j]) // 小比较
                {
                    h++;
                    j++; // 下次比较下一个
                    cd = 1;
                }
                else
                {
                    cd = 0;
                    break;
                }
            } // 匹配上首相开始比较
            if (cd == 1)
            {
                return i;
            }
        } // a里面每一项比较
    }
    if (len_a < len_b || cd == 0) // 超长或者未匹配
    {
        return -1;
    }
}
int main()
{
    fgets(a, 505, stdin);
    fgets(b, 505, stdin);
    printf("%d", mystrstr(a, b));
    return 0;
}