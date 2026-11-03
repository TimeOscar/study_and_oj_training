#include <stdio.h> //题目，输入一段文字，把文字中的``替换为''
#include <cstdio>
#include <stdio.h>
#include <string.h>
int main1()
{
    int state = 0; // 0在引文外，1在引文内。
    for (;;)
    {
        int c = getchar();
        if (c == -1)
            break; // 不知道这是啥
        if (c == '"')
        {
            if (state == 0)
            {
                state = 1;
                printf("``");
            }
            else
            {
                state = 0;
                printf("''");
            }
        }
        else
        {
            putchar(c);
        }
    }
    // 状态机法

    // 模式匹配法
    return 0;
}

int main()
{
    int c;
    for (;;)
    {

        for (;;)
        {
            c = getchar();
            if (c == '"' || c == -1)
                break;
            putchar(c);
        }
        printf("``");
        for (;;)
        {
            c = getchar();
            if (c != '"' || c == -1)
                break;
            putchar(c);
        }
        printf("''");
    }
    return 0;
}
int main2()//ppt11页题目
{

    char ss[] = "QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    char s[1000];
    fgets(s, 1000, stdin);//使用fgets之后会自动补一段0，所以可以看作是一个字符串
    
    s[strlen(s) - 1] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        int c = s[i];
        int j;
        for (j = 0; ss[j] != 0; j++) {
            if (ss[j] == c) break;
        }
        if (ss[j] == c) {
            putchar(ss[j - 1]);
        } else {
            putchar(c);
        }
    }
}