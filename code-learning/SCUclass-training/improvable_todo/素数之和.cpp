#include <stdio.h>
#include<stdbool.h>
bool is_prime[100000005] ;
int main() {
    int max ; 
    scanf("%d",&max);
    for (int i = 0; i < max; i++)
    {
        is_prime[i] = 1;
    }
    
    
    for (int i = 2; i*i < max; i++)
    {
        for (int  j = 2*i; j < max; i += i )
        {
            is_prime[i] = 0;
        }
        
    }
    

   //plus
   long long add;
    for (int i = 0; i <max; i++)
    {
        if (is_prime[i])
        {
            add = add +i;
        }
        
    }
    printf("%lld",add);
    return 0;
}