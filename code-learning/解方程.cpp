#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	while (	scanf("%d,%d,%d", &a, &b, &c) == 3) {
		double   delta, a1, a2, a3;
		//计算
		if ( a == 0  ) {
			if (b == 0 );
			{
				printf("x\n");
				continue;
			}
			if ( b != 0)
			{
				a3 = -c / (b*1.0) ;
				printf("%.2f\n", a3);
				continue;
			}
		continue;
		}
		delta = b * b - 4.0 * ( a* c );
		if (delta < 0) {
			printf("x\n");
			continue;
		}
		a1 = (-b + sqrt(delta)) / (a * 2);
		a2 = (-b - sqrt(delta)) / (a * 2);
		if (delta == 0 ) {
			printf("%.2f\n", a1);
			continue;
		}
		if (delta > 0 && a1 > a2 ) {
			printf("%.2f %.2f\n", a1, a2 );
		} else {
			printf("%.2f %.2f\n", a2, a1 );
		}

	}
	return 0;
}
