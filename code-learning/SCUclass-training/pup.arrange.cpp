#include <stdio.h>
int main()
{int
a[4]={ 9,8 , 6 ,7};
int n=3;
for (int i = 0; i < n; i++)
{
    for (int j = i-1; j < n; j++)
    {
        if (a[j]>a[j+1])
        {
            int temp = a[j];
            a[j]= a[j+1];
            a[j+1]=temp;
        }
        
    }
    
}

    



    return 0;
}

//一定不能先写，先思考，思考好了再动手