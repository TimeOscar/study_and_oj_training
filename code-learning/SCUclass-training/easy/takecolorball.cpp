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
                for ( k = 0; k < 7; k++)
                {
                    if (i+j+k==n)
                    {
                        cnt ++;
                    }
                    
                }
                
            }
            
        }
        printf("%d\n",cnt);
    }

    return 0;
}
//渐入佳境