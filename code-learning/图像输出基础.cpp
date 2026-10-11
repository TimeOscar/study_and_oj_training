#include<stdio.h>
int main() {
	int m, n ;
	scanf("%d", &m);
	while (m--) { //m个数据
		scanf("%d", &n);	
	
		for (int i = 0 ; i < n; i ++ ) {
			//n层三角形
			for (int temp0 = 0	 ; temp0 <i ; temp0 ++ ) {
				printf(" ");
			}//空格
			for (		int temp  = (n-i) * 2 - 1 ; temp >  0 ; temp = temp - 1   ) {
				//每一行输出
				printf("*");//个数
			}
			printf("\n");
		}
		//TODO
	}



	return 0;
}
