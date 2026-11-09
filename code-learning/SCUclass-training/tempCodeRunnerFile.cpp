#include<stdio.h>
#include<string.h>
char a[505],b[505];
int c[505]={0};//int 和c型数组
int make(){
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));//忘记初始化
    scanf("%s %s", &a,&b);
    int i = strlen(a)-1;
    int j = strlen(b)-1;
    int carry = 0 ,k=0 ;//进位
    while (i>=0||j>=0||carry>0)
    {
        int mem = 0;
        mem += carry;
        if (i>=0)
        {
            mem = mem + a[i]-'0' ;
            //字符和数字的转换
            i--;
        }
         if (j>=0)
        {
            mem = mem + b[j]-'0' ;
            //字符和数字的转换

            j--;
        }
        c[k]=mem%10;k++;
        carry = mem/10;
    }
     for (int p = k - 1; p >= 0; p--)
    {
    printf("%d", c[p]);
    }
    printf("\n");

    return 0 ; 
}
int main(){
    int number;
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        make();
    }

}