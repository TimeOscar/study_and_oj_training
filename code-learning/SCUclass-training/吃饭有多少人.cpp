#include<stdio.h>
int make(int x , int y ){
    int a=0,b=0,c=0;
    for ( a = 0; a <=x; a++)
    {
        for ( b = 0; b+a <= x; b++)
        {
            for ( c = 0; c+a+b  <= x; c++)
            {

            if(3*a+2*b+c==y && a+b+c ==x){
                printf("%d %d %d\n",a ,b,c);
            }
            }
            
        }
        
    }
    

    return 0;
}
int main(){
    int n , x , y ;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&x , &y );
        make(x, y );
    }
    return 0 ;
}
//debug太好用啦哈哈哈哈哈哈哈