#include <stdio.h>
/*
	정렬 알고리즘 - 단순정렬(교환법), 버블정렬(인접 요소 비교)
	- 정렬 후엔 오름차순, 내림차순 정렬이 됨
	
	
*/

void main() {
	//1. 단순정렬
	int a[5] = { 3, 2, 5,1, 4 };
	int i, j, temp; 
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
	}
	
	

}