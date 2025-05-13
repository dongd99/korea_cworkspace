#include <stdio.h>
#include <time.h>
#include <Windows.h>


/*
	�ð� �Լ� - time.h ����
	- time_t �ڷ����� ���

*/

int main() {
	
	time_t now;
	now = time(NULL);// time(NULL)�� �ð��� ��� �帧�� �ǹ�

	//ld = long decimal
	printf("%ld��\n", now);//1970�� 1�� 1�� 0�� 0�� 0�� ������ ��
	//��(day)�� ȯ��
	printf("%ld��\n", now/(24* 60* 60));

	//��(year)�� ȯ��
	printf("%ld��\n", now / (365 * 24 * 60 * 60));

	//����ð� ����
	clock_t start, end;
	double spendTime;

	start = time(NULL);//���۽ð�
	printf("%ld\n", start);

	//1~10���� ���
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = time(NULL);//����ð�
	printf("%ld\n", end);
	printf("�ɸ� �ð� : %ld��\n", end - start);

	clock_t startc, endc;


	startc = clock();//���۽ð�
	printf("%ld\n", start);

	//1~10���� ���
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	endc =clock();//����ð�
	spendTime = (double)(endc - startc);
	printf("%ld\n", end);
	printf("�ɸ� �ð� : %lf\n", spendTime/1000);


	return 0;
}