#include<stdio.h>
#include<math.h>
int main(){
    double  r , h  ,S   , V ;
    scanf("%lf%lf", &r ,&h );
    double pie =3.14159;
    V = pie * r * r * h ;
    S = pie * 2* r * (r+ h );
    printf("%.2f %.2f",V , S );
    return 0 ; 
}