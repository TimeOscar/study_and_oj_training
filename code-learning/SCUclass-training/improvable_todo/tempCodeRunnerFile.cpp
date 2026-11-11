#include <string.h>
#include <stdio.h>
char a[31];
int make(char a[20])
{    int cont = 0; int  m = 0 ;
    for (int i = 0; i < 15; i++) // 最多读15个字符
    {
       
        if (a[i] >= '1' && a[i] <= '9')//读到数字1-9计数//漏掉字符‘’了
        {   
            m = m * 10 + a[i];
        }
        else if (a[i] == '.')
        {   cont ++;//记录点数
            if (m >= 0 && m <= 255)
            {
                m = 0;
                continue;
            }
            else
            {
                return 1; // no
            }
        }else
        {
            return 1;//no//非数字非。跳出
        }
        
        //结束
        if(a[i] = 0 &&cont ==3){//判断点数是否是3

//漏洞：如果结尾是点号无法更改
            return 0;//yes
            
        }
    }
    return 0;
}
int main()
{
    while (1)
    {
        fgets(a, 31, stdin);
        if ( 0 == strcmp(a, "End of file\0"))//strcmp返回值错误
        {
            break;
        }
        if (make(a) == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}