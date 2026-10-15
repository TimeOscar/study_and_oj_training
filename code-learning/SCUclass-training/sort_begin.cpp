#include<stdio.h>
main() {
	int i, n ;
	int arr[4];
	scanf("%d", &n);
	while (n--) {

		for (i = 0  ; i < 4; i++ ) {
			scanf("%d", &arr[i]);
		}
		for (int k = 0; k <= 3; k++) {
			for (int j = 0; j < 3; j++) {
				int temp;
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp ;
				}
			}
		}
		printf("%d",arr[0]);
		printf(" %d %d %d", arr[1], arr[2], arr[3]);
		printf("\n");


	}

	return 0 ;
}
