#include <stdio.h>
#include <string.h>
char a[505], b[505];
int mystrstr(char a[505], char b[505])
{
    int len_a = strlen(a);
    int len_b = strlen(b);

    int i = 0, temp = 0;
    for (; i <= len_a ;)
    {
        if (a[i] == b[temp]) // a从0开始比较
        {
            i++;temp++;//同时走下一位            
        } else{
            i++
        ;
        }// 匹配上首相开始比较
    }
    if (temp == len_b+1 )//我不知道为什么要加1
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
int main()
{
    fgets(a, 505, stdin);
    fgets(b, 505, stdin);
    mystrstr(a, b);
    return 0;
}

// 我打算在strstr函数中进行修改
//但是这会让我的脑子不清醒，所以debug还是太好用了