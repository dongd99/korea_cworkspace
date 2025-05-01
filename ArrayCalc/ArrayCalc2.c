//#include <stdio.h>	
//
//void main() {
//
//	/*
//		성적의 합계, 평균, 최대값, 최솟값 구하는 프로그램
//		sum , avg, max, min
//	*/
//	int sum = 0, max = 0, min;
//	double avg;
//	int score[] = { 85, 75, 93, 74, 80,100, 20 };
//
//	//배열의 크기(개수)
//	int size = sizeof(score) / sizeof(score[0]); //전체 바이트를 인덱스 하나의 바이트로 나눠주는 것 20/4 = 5
//
//	//성적의 합계, 평균 구하기
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//
//	}
//	avg = (double)sum / size;
//	printf("합계: %d, 평균: %.1lf \n", sum, avg);
//	
//	for (int i = 0; i < size; i++) {
//		if (max < score[i]) {
//			max = score[i];
//		}
//	}
//	min = max;
//	for (int i = 0; i < size; i++) {		
//		if (min > score[i]) {
//			min = score[i];
//			printf("%d\n", min);
//		}
//	}
//	printf("최대값: %d, 최소값: %d\n", max, min);
//
//
//
//
//
//
//
//
//}