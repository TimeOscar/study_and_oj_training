#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[25],b[25], n , j ;
    a[1] = 0 ;
    cin>> n ;
    for (int i=2; i<=n-2; i++) {
    b[1]=1;
    b[0]=1;
    b[i]= b[i-1]+ b[i-2];
    a[i]++;
    a[i-1]++;
    a[i-2]++;
    }
    for (j=0; j<=n; j++) {
    cout<<a[j];
    } 

    return 0 ;
}