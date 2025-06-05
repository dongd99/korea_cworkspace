#include <stdio.h>	

/*
	버블 정렬 인접한 요소와 비교해서 교환 정렬
*/
void main() {
	int a[5] = { 5, 4,1, 3,2 };
	int i, j, temp;
	for (int k = 0; k < 5; k++) {
		printf(" %d", a[k]);
	}
	int sw = 0; // 교환 없음 0 교환 있음 1;
	printf("\n");
	for (i = 0; i < 4; i++) {
		sw = 0;
		for (j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
				
				sw = 1;
			}
			
			
			printf("i = %d, j = %d,", i, j);
			for (int k = 0; k < 5; k++) {
				printf(" %d", a[k]);
			}
			printf("\n");
			
		}
		if (sw == 0) {
			printf("교환없음\n");
			break;
		}
	}
	printf("i = %d, j = %d,", i, j);
	for (int k = 0; k < 5; k++) {
		printf(" %d", a[k]);
	}
	/*printf("i = %d, j = %d,", i, j);
	for (int k = 0; k < 5; k++) {
		printf(" %d", a[k]);
	}
	printf("\n");
	if (sw == 0) {
		continue;
	}*/
	/*printf("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++) {
			if (a[i] < a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				printf("i = %d, j = %d,", i, j);
				for (int k = 0; k < 5; k++) {
					printf(" %d", a[k]);
				}
				printf("\n");
			}
		}
	}*/



}