#include<bits/stdc++.h>
int main(){
    int a, b, c, n ;
    scanf("%d",&n  );
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        int integ;
        integ =  a/b;
        int temp = a % b;
        int result= 0 ;
        printf("%d.",integ);
        for (int j = c ; j >1; j--)
        { 
           
            temp= temp*10;
             result = temp /b ;
            temp = temp %b ;
            printf("%d",result);
        }//小数部分（去掉最后一位）
        if (result>=5)
        {
            printf("%d",result + 1);
        }else{
            printf("%d",result);
        }
        

    }
    
    return 0;
}
