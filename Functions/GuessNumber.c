#include <stdio.h>	
#include <math.h>
/*
	���� ���� ����
	- ��ǻ�Ͱ� ������ ����
	- ����ڰ� ������ ���� �Է�
		1. ����
		2. �������� ���� ���� ���� ��
		3. �������� ���� ���� ���� ��
*/
int main() {

	srand(time(NULL)+ time(NULL)+ time(NULL)*3.14);
	int randNum;//��ǻ�Ͱ� ������ ����
	int guessNum;// ����ڰ� ������ ��
	int count = 5; // �õ��� Ƚ��

	randNum = rand() % 50 + 1;// 1~50������ ����
	//printf("��ǻ���� ���� %d\n", randNum);
	while (1) {

		printf("���� �õ� Ƚ�� = %d��\n", count--);
		printf("���� �Է�(1~50) : ");
		scanf_s("%d", &guessNum);
		if (guessNum == randNum) {
			printf("�����Դϴ� %d ����� ���߼̽��ϴ�. ��ǻ���� ��: %d\n", count, randNum);
			break;
		}
		else if(guessNum > randNum) {
			printf("�����Դϴ� %d ���� �۽��ϴ�.\n", guessNum);
		}
		else {
			printf("�����Դϴ� %d ���� �����ϴ�.\n", guessNum);
		}
		

		if (count == 0) {
			printf("���� Ƚ���� �����ϴ� . �й�...");
			break;
		}

	}

	



	return 0;
}