#include <stdio.h>
#include <string.h>
char a[505], b[505];
int mystrstr(char a[505], char b[505])
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    int cd = 0; // 状态机
    int i = 0,temp;
    for (; i <= len_a - len_b; i++)
    {
        if (a[i] == b[0])
        {
            int h = i;
            cd = 1;
            for (int j = temp; j < len_b - 1;)
                if (a[h] == b[j]) 
                {
                    h++;
                    j++; // 下次比较下一个
                    cd = 1;
                }
                else
                {   temp = j ;
                     
                    break;
                }
            } // 匹配上首相开始比较

        }
        if (temp != len_b-1)
        {
            printf("NO");
        }else{
            printf("YES");
        }
        
}
int main()
{
    fgets(a, 505, stdin);
    fgets(b, 505, stdin);
    printf("%d", mystrstr(a, b));
    return 0;
}

//我打算在strstr函数中进行修改