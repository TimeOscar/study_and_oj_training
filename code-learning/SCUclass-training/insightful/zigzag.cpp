#include <stdio.h>
int a[105][105];
void arrange(int m , int n ){
    int j = 0 , k = 0, i = 1 ;
    a[j][k] = i ;
    while (i <m*n )//这个等号会导致ai都看不出来的死循环
    {
    
     if (j == 0 && k < n - 1)//触碰顶部
    {   k++;i ++;
        a[j][k] =i ;//右移一位
        while (k>0 && j < m-1 )  
        {
            j++;k--;i++;
            a[j][k] = i ;
        }//向左下走
    }
    if (k == 0&& j <m - 1 )//触碰左边
        {   j++;i ++;
            a[j][k] =i ;//下一
            while (j>0 && k < n -1 )
            {
                j--;k++;i++;
                a[j][k] = i ;
            }//向右上走
        }
    if (j == m-1 && k < n - 1 )//触碰下边
        {   k++;i ++;
            a[j][k] =i ;//右一
            while (j > 0 && k <n - 1)
            {
                j--;k++;i++;
                a[j][k] = i ;
            }//向右上走
        }
    if (k == n -1 && j <m - 1)//触碰右边
    {   j++;i ++;
        a[j][k] =i ;//下一
        while (j < m -1&& k > 0)
        {
            j++;k--;i++;
            a[j][k] = i ;
        }//向左下走
    }
    }}
int main() {
    int m = 0 , n = 0 ;
    scanf("%d%d",&m,&n);
    arrange(m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
//本题目我没有看到触碰边界的2个判定条件，
//误以为一个条件都可以运行，这是我犯下的巨大错误，让我debug时间加倍//

//方法2。dir作为方向判断的变量进行计算
//方法3.观察得出：横纵坐标之和是奇数还是偶数。