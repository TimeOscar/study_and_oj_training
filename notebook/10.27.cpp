//竖式问题
#include <stdio.h>
#include<string.h>
int main() {
    char digits[] = "1234";
    for (int abc = 100; abc <=999; abc++)
    {
        for (int de = 10; de <=99; de++)
        {
            int x =abc * (de  %10)
 ;           int y = abc *(de/10)
;            int z = abc*de ;
               
        char ss[100];
        sprintf(ss ,"%d%d%d%d%d%d",x,y,z,abc,de,abc*de);

        int ok =1;

        for (int i = 0; i < strlen(ss); i++)
        {
            int c = ss[i];
            if (strchr(digits,c)== NULL)//在digits里面找c
            {
                ok = 0;
                break;
            }
            
        }
        if (ok)
        {
            printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
        }
    }
        
    }
    

    return 0;
}