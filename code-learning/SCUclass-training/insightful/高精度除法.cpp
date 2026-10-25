#include<bits/stdc++.h>
int main(){
    int a, b, c, n ;
    scanf("%d",&n  );
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        int integ, point =0;
        integ =  a/b;
        int temp = a % b;
        for (int j = c ; j >=1; j--)
        {   temp = a % b; 
            point = point*10;
            point = temp+point;
        }
        printf("%d.%d",integ,point);

    }
    
    return 0;
}