//#include <stdio.h>	
//
//void main() {
//
//	/*
//		������ �հ�, ���, �ִ밪, �ּڰ� ���ϴ� ���α׷�
//		sum , avg, max, min
//	*/
//	int sum = 0, max = 0, min;
//	double avg;
//	int score[] = { 85, 75, 93, 74, 80,100, 20 };
//
//	//�迭�� ũ��(����)
//	int size = sizeof(score) / sizeof(score[0]); //��ü ����Ʈ�� �ε��� �ϳ��� ����Ʈ�� �����ִ� �� 20/4 = 5
//
//	//������ �հ�, ��� ���ϱ�
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//
//	}
//	avg = (double)sum / size;
//	printf("�հ�: %d, ���: %.1lf \n", sum, avg);
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
//	printf("�ִ밪: %d, �ּҰ�: %d\n", max, min);
//
//
//
//
//
//
//
//
//}