#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, a ;
    int sum = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {   int temp = i ;
        while (temp != 0)
        {
            a = temp % 10 ;
            if (x ==  a)
            {
                sum++;
            }
            temp= temp /10 ;
        }
    }
    cout << sum;//输出
    return 0;
}