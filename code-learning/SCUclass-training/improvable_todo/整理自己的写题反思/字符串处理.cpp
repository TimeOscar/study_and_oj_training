#include<stdio.h>
char a[105]={0};
int make(){
    int i = 0 , cd = 0;
    a[105]={0};//不要再while里面用int，记得打括号
    while (( cd = getchar()) != 0 && cd != '\n')
    //逻辑符号为什么要用&&而不是||
    {
        if (cd >='a'&& cd <='z')
        {
         a[i] = cd;
         i++;   
        }
    }
    while (i--)
    {
        printf("%c",a[i]);
    }
    
    
    return 0; 
}
int main(){
    int number;
    scanf("%d",&number);
    getchar();//这里一定要注意：吃掉换行符
    for (int i = 0; i < number; i++)
    {
        make();
    }
    
}