#include<iostream>
#include<cstdio>
using namespace std;
int main (){
    int k ,i, h ;
    double s = 0 ;  
    cin >> k  ;
    for( i=1;s<=k;i++){
    s = s + 1.0/i ;
    h = i  ;
    }
    cout << h ;
    return 0 ; 
}