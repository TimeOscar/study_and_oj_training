#include <stdio.h>
int main()
{int
a[1000]={ 0};
int n=0;
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if (a[j]>a[j+1])
        {
            int temp = a[j];
            a[j]= a[j+1];
            a[j+1]=temp;
        }
        
    }
    
    for (int j = 0; j <n; j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    
}
    return 0;
}

