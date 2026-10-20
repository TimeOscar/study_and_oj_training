#include <stdio.h>

int main() {
	int n, i, a, b;
	
	scanf("%d", &n);  // 有n组数据
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);  // 读入两个整数
		printf("%d\n", a + b);  // 输出两个整数的和
	}
	return 0;
}