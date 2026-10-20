#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[25], n , j ;
    memset(a, 0, sizeof(a));
    cin>> n ;
    if(n == 1){cout<<0<<" "<<1;return 0 ;}
    if(n == 2){cout<<1<<" "<<1<<" "<< 1;
        return 0; }
    a[n]=1;
    for (int i=n; i-2>=0; i--) {
    a[i-1]+=a[i];
    a[i-2]+=a[i];;
    }
    for (j=0; j<=n; j++) {
    cout<<a[j]<< " ";
    } 

    return 0 ;
}//缺点，使用次数多，慢
//使用*=会更快