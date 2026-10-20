/*//阶乘的运算
#include<bits/stdc++.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++){
        int m=1;
        for (int  j = 0; j < a; j ++)                        //每次都要乘以阶乘，重复了
        {
            m  *=j %1000000 ;
        }

    }

    return 0 ;
}//940313*/
/*
#include<bits/stdc++.h>
int main(){
    int a;
    scanf("%d",&a);
     int m=1, s = 0;
    for (int i = 0; i < a; i++){
        m  =(m * i  )  %1000000 ;                             //到一定数值之后阶乘后六位全部变成0了(还能优化)
        s  = (m + s )%1000000;
    }
    printf("%d",s );
    return 0 ;
}//940313
*/

/*#include<stdio.h>
int main(){
    int a[1000];
    int n ;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = n - 1 ; i >=0; i--)
    {
        printf("%d",a[i] );
    }
    printf("\n");

    return 0;
}*/
// 组的输入和输出
/*#include<stdio.h>
int main(){
    int a[1000];
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
       a[i]= 0;//初始化
    }
    for (int j = 0; j < n; j++)
    {
        for (int j = 0; j <= n; j++)
        {
            a[j] =! a [j];//布尔值取反
        }

    }
    for (int i = 1 ; i <=n; i--)
    {
       if (a[i]!=0 )
       {
        printf("%d",i  );
       }

    }
    printf("\n");

    return 0;*/

// 二维数组
#include <stdio.h>
int main()
{
    int a[100][100];
    int n;
    scanf("%d", n);
    for (int j = 0; j < n; j++){
        for (int i = 0; i <= n; i++)
        {
            a[i][j] = 0;
        }
    } // 初始化
    int r = 0;
    int c = n - 1;
    int k = 1;
    a[r][c] = k++; // r是纵c是横

    while (k <= n * n)
    { // 下
        while(r + 1 < n && a[r + 1][c] == 0){
            a[++r][c] = k++;
        }
        // 左
        while (r - 1 >= 0 && a[r - 1][c] == 0){
            a[r][c--] = k++;
        }
        // shang
        while (r + 1 >= 0 && a[r - 1][c] == 0){
            a[r][c] = k++;
        }
        // you
        while (r - 1 > 0 && a[r - 1][c] == 0){
            a[r][c] = k++;
        }
    }

    return 0;
}
