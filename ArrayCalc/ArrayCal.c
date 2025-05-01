//#include <stdio.h>
//
//int main() {
//
//	/*
//		정수형 배열의 크기가 10인 배열 선언
//		1부터 10까지 저장하고 합계를 계산하기
//	*/
//	int a[10];
//	int i;	// 반복 변수
//	int total = 0;//합계를 저장할 변수
//
//	//요소 저장하기
//	a[0] = 1;
//	//이렇게 하는 것은 너무 귀찮고 요소가 많을 경우에는 시간이 오래 걸린다.
//	for (i = 0; i < 10; i++) {
//		a[i] = i+1;
//		total += a[i];
//		printf("a[%d] = %d, total = %d\n",i, a[i], total);
//	}
//
//	for(i = 0; i<(sizeof(a)/sizeof(a[0]));i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	printf("합계 : %d\n", total);
//	return 0;
//}