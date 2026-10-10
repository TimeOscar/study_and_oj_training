#include<iostream>
#include<cstdio>
using namespace std;
int main (){
    int k ,i;
    double s = 0 ;  
    cin >> k  ;
    for( i=1;s>=k;i++){
    s = s + 1.0/i ;
    }
    cout << i ;
    return 0 ; 
}