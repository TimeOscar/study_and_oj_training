#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    for (int nap = 0; nap < number; nap++)
    {   int n, cnt = 0 ;
        scanf("%d",&n);
        int i=0, j=0 ,k=0;
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
               int c = n -i-k;
                    if (c>=0 )
                    {
                        cnt ++;
                    }else{
                        continue;
                    }
                    
                
                
            }
            
        }
        printf("%d\n",cnt);
    }

    return 0;
}
//渐入佳境
//三重循环>> 一重循环
//a, b, c 变化循环>> 变为仅仅循环a，把b和c的和差和n和a进行计算，
//算出来的值就是所求值（把b的循环减少了） 