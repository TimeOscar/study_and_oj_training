#include<stdio.h>
#include<math.h>
double eps = 1e-5;
double  make(int a){
double a1 = a ,a2 = 0 ;
for(;;)
{
    a2 = (a1 + a/a1 )*0.5;
    if (fabs(a2-a1)<eps)//fabs的使用：取绝对值？
    {
        break;
    }
    
    a1= a2 ;
}
return a2;

}
int main(){
    int number;
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        int a ;
    scanf("%d", &a );
    if (a<=0)
    {
        printf("error");
    }else{
    
    printf("%.5f\n",make(a));    
    }}
    
}
