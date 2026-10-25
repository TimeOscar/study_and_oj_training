#include<stdio.h>
int main(){
    int T,m,n;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d",&m,&n);
        if (m<=n)
        {
            for (int j = m; j >=1; j--)
            {
            if (n%j==0&&m%j==0)
            {
                printf("%d\n",j);
                break;
            }
            
            }
            
        }else{
            for (int j = n; j >=1; j--)
            {
            if (n%j==0&&m%j==0)
            {
                printf("%d\n",j);
                break;
            }
            
            }

        }
        
    }
    
    return 0 ;
}//暴力求解 