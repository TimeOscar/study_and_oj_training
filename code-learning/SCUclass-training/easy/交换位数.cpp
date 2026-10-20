#include<stdio.h>
int main (){
    int a ;
    scanf("%d", &a );
    if (a  <=9999 && a >= 1000)
    {
    int temp1 ,temp2 ,temp3 ,temp4 ;
    temp1 = a %10 ;
    temp2 = a / 10 % 10;
    temp3 = a /100 % 10;
    temp4 = a /1000%10 ;
    a =  temp1*100+ temp2*10 +temp3 +temp4 *1000;
    printf("%d",a );
    }
    else
    {
    printf("illegal");
    }

    return 0 ;
}