#include <stdio.h>	

int main() {

	//�ڸ���ġ�� ���α׷�
	int seats;
	int column;
	printf("���尴 ���� �Է��ϼ���");
	scanf_s("%d", &seats);
	printf("�¼� ���� �Է��ϼ���:");
	scanf_s("%d", &column);
	for (int i = 1; i <= seats; i++)
	{
		printf("�¼�%2d \t", i);
		if (i % column == 0)printf("\n");
	}



	return 0;
}