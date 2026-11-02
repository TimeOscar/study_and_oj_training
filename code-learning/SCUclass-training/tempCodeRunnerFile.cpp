#include <stdio.h>
int main() {
    int max ; 
    scanf("%d",&max);
    int a[10000005] ;
    for (int i = 0; i <10000005; i++)
    {
        a[i] = 1;
    }
    
    for (int i = 2; i*i <= max; i++)
    {
        for ( int j = 2*i; j <= max; j =j+i )//这里调试了2次改debug之后才搞好了
        {
            a[j] = 0;
        }
        
    }
    

   //plus
   long long add = 0 ;//忘记初始化了！！！
    for (int i = 1; i <=max; i++)
    {
        if (a[i])
        {
            add = add +i;
        }
        
    }
    printf("%d",add -1);
    return 0;
}