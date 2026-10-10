#include<iostream>
#include<cstdio>
using namespace std;
int main (){
    int k ,i,h=0;
    double s = 0 ;  
    cin >> k  ;
    for( i=1;s>=k;i++){
    s = s + 1/i ;
    i =  h;
    }
    cout << h ;
    return 0 ; 
}