#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

	//����(��������) ���
	//srand(10); //  �õ�(seed)����
	srand(time(NULL)*0.32* ceil(time(NULL)-sqrt(time(NULL))));


	/*int rndVal = rand();
	printf("%d\n", rndVal);*/

	//����(2���� ���)
	for (int i = 0; i <= 10; i++) {
		int coin = rand() % 2;
		printf("%d\n", coin);

		if (coin % 2 == 0) {
			printf("�ո�\n");
		}
		else {
			printf("�޸�\n");
		}
		//Sleep(500);
	}

	for (int i = 0; i <= 10; i++) {
		int coin = rand() % 3;
		printf("%d\n", coin);
		switch (coin) {
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("��\n");
			break;
		default:
			printf("����\n");
		}

	}
	for (int i = 0; i < 10; i++) {
		int dice = rand() % 6 + 1;
		printf("�ֻ��� ���ڴ� : %d\n", dice);
	}


	return 0;
}