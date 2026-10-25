#include<bits/stdc++.h>
int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            int x = i *j ;
            printf("%d*%d=%d ",i , j , x );
        }
        printf("\n");
    }
    

    return 0;
}