#include<stdio.h>
#include<math.h>
int main() {
	int T, m, n ;
	scanf("%d", &T );
	while ( T-- ) {
	int end = 0;
		scanf("%d%d", &m, &n);
		for (int i = m; i <= n; i++) {
			int an = (i % 10) * (i % 10) *(i % 10)  +  (i/ 10 % 10) * (i/10 % 10)*(i/10 % 10) + (i / 100) * (i / 100)*(i / 100);
			if (an == i) {
				if(end==0){
				printf("%d",i);
				}
				else{
				printf(" %d",i);
				}
				end++ ;
			} 
		}
		
		if (  end ==0  ) {
			printf("-1");
		}
		printf("\n");
	}
	return 0 ;
}
