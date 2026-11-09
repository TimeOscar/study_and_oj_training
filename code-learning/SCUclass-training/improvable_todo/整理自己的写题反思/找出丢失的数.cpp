#include<stdio.h>
#include<string.h>
char a[1005]={0};
int make(){
    memset(a, 0, sizeof(a));//第一次·使用
    //原本写的1005，数组超限！！！
    //误区，只有在定义的时候才能用{}来初始化
    int h,MAX = 0;//忘记初始化
    do{    
        scanf ("%d",&h);
        a[h]=1;
        MAX++;
    }
    while (h);
    for (int i = 1; i <= MAX; i++)
    //原来这里没加等号，最后一个最大的找不到。
    {
        if (a[i]==0)
        {
            printf("%d\n",i);
            break;
        }
        
    }
    return 0;
}
int main(){
    int number;
    scanf("%d",&number);
    getchar();
    for (int i = 0; i < number; i++)
    {
    make() ;
    }
    
}