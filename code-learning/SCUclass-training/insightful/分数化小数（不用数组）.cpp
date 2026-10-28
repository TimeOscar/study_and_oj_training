#include <bits/stdc++.h>
int main()
{
    int a, b, c, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        int integ, plus;
        integ = a / b;//整数部分出错
        int temp = a % b;
        int result = 0, over = 0;
        printf("%d.", integ);
        int wait =  0 ;
        for (int j = c; j > 1; j--)
        {

            temp = temp * 10;
            result = temp / b;
            
            if (result == 9)
            {
                over++;
                wait = temp 
            }
            else
            {
                over = 0;
                printf("%d", result);
            }

            temp = temp % b;

        } // 小数部分（去掉最后一位）
        if (result >= 5 && result != 9)
        {
            printf("%d\n", result + 1);
        }
        else if (result < 5)
        {
            printf("%d\n", result);
        }
        else if (result == 9)
        {
            printf("%d", wait + 1);
            for (int h = over; h >= 1; h--)
            {
                printf("0");
            }
        }
    }

    return 0;
}



//漏洞，整数进位！！！



