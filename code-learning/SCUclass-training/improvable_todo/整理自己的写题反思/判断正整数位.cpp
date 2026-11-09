#include <stdio.h>


int main(){
    int number;
    scanf("%d",&number);
 getchar(); //很重要，吃掉换行符
    for (int i = 0; i < number; i++)
    {   int plus = 0 ;
        char a;
     //   while (getchar()!='\n'&& getchar()!= EOF)
     //这是一个经典错误，我在while里面用了2次getchar。
     while (int gt = getchar()!='\n'&& gt != EOF)
     //为社么不用再次使用换行符：getchar的判断已经把它吃走了
        {
            plus ++;
        }
        printf("%d\n",plus);
    }
    
}


