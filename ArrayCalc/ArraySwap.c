#include <stdio.h>

void main() {

	//�迭�� ��Ұ� ��ȯ
	int a[5] = { 3,2,5,1,6 };
	int i, temp;
	//�ݺ������� �ӽú��� ����
	
	//�� ��ġ�� ��ҿ� ���� ��� ��ȯ�ϱ�
	for (i = 0; i < 4; i++) {
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;

	}
	for (i = 0; i < 5; i++) {

		printf("%d\n", a[i]);

	}





}