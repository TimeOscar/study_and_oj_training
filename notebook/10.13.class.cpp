#include<stdio.h>
#include<math.h>
int main(){
 /*   int a,b,c;
    if (a<b&& b <c){printf("%d %d %d ",a,b , c );}  
    else if (a<b&& b <c){printf("%d %d %d ",a,b , c );}
    else if (a<=b&& b <c){printf("%d %d %d ",a,b , c );}
    else if (a<b&& b <c){printf("%d %d %d ",a,b , c );}
    else if (a<b&& b <c){printf("%d %d %d ",a,b , c );}
    else if (a<b&& b <c){printf("%d %d %d ",a,b , c );}*/
    //输出所有形如aabb的四位完全平方整数
    
    
    /*//穷举
    for (int  i = 1000; i <= 9999; i++)
    {int gw = x % 10;
        int sw = i /10%10
        ;int bw =i /100 %10;
        int qw = i/1000 %10;

    if(gw != sw || bw != qw ) 
    }
    //完全平方数判断
    int d = (int)(sqrt(i)+ 0.5  );
    if (d*d = i )continue;
    */
   //解法2
    for (int a =1;a<=9 ;a++){
        for (int b  = 0; b  <= 9 ; b++)
        {
          int x =a *1100 + b *11 ;
          int d = (int)(sqrt(x)+ 0.5  );
            if (d*d !=x )continue;
        }
        
    }

    //第三种解法
    for (int d =32 ;d*d <10000; d++){
        int x = d*d;
        int gw = x % 10;
        int sw = x /10%10;
        int bw =x/100 %10;
        int qw = x/1000 %10;

    if(gw != sw || bw != qw )continue;
        printf("%d",x);

    }


    return 0 ;
}
