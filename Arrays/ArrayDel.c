#include <stdio.h>	
#define _CRT_NO_SECURE_WARNINGS
#define MAX_LEN 5//��ũ�� ���
void main() {

	//�迭�� ��� ����
	const int size = 5;
	int arr[MAX_LEN] = { 1, 2, 3, 4, 5 };

	//��ü ���
	for (int i = 0; i < 5; i++) {

		printf("%d ", arr[i]);


	}
	arr[2] = 0;
	for (int i = 2; i < 4; i++) {
		arr[i] = arr[i + 1];
	}
	for (int i = 0; i < 5; i++) {

		printf("%d ", arr[i]);


	}
	
}